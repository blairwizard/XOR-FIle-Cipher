#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
    unsigned char buffer[1024];
    int key_index=0;
    size_t bytes_read;
    // 1. Validation
    if (argc != 4) {
        printf("Usage: %s <input_file> <output_file> <key>\n", argv[0]);
        return 1;
    }

    
    FILE *fin = fopen(argv[1], "rb");
    FILE *fout = fopen(argv[2], "wb");
    char *seckey = argv[3];
    int key_len=strlen(seckey);
    

   
    
    while ((bytes_read = fread(buffer, 1, sizeof(buffer), fin)) > 0) {
        
        for (size_t i = 0; i < bytes_read; i++) {
            // The XOR logic
            buffer[i] = buffer[i] ^ seckey[key_index];
            
            // Increment and wrap the key index using modulo
            key_index = (key_index + 1) % key_len;
        }

        // Write the processed buffer to the new file
        fwrite(buffer, 1, bytes_read, fout);
    }

    fclose(fin);
    fclose(fout);
    printf("Encryption complete.\n");

    return 0;
}