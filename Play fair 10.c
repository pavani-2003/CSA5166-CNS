#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    // Playfair Matrix 
    char playfairMatrix[5][5] = {{'M', 'F', 'H', 'I', 'K'}, 
                                {'U', 'N', 'O', 'P', 'Q'}, 
                                {'Z', 'V', 'W', 'X', 'Y'}, 
                                {'E', 'L', 'A', 'R', 'G'}, 
                                {'D', 'S', 'T', 'B', 'C'}}; 
  
    // Message 
    char message[100]; 
    printf("Enter the message: "); 
    scanf("%s", message); 
  
    // Get message length 
    int len = strlen(message); 
  
    // Encrypted Message 
    char encryptedMessage[len]; 
  
    int i = 0; 
    while (i < len) { 
  
        // Get row position 
        int row1, row2; 
        for (int j = 0; j < 5; j++) { 
            for (int k = 0; k < 5; k++) { 
                if (message[i] == playfairMatrix[j][k]) { 
                    row1 = j; 
                    row2 = k; 
                } 
            } 
        } 
  
        // Get column position 
        int col1 = 0, col2 = 0; 
        for (int j = 0; j < 5; j++) { 
            for (int k = 0; k < 5; k++) { 
                if (message[i + 1] == playfairMatrix[j][k]) { 
                    col1 = j; 
                    col2 = k; 
                } 
            } 
        } 
  
        // Encryption Logic 
        if (row1 == row2) { 
            encryptedMessage[i] = playfairMatrix[row1][(col1 + 1) % 5]; 
            encryptedMessage[i + 1] = playfairMatrix[row2][(col2 + 1) % 5]; 
        } 
        else if (col1 == col2) { 
            encryptedMessage[i] = playfairMatrix[(row1 + 1) % 5][col1]; 
            encryptedMessage[i + 1] = playfairMatrix[(row2 + 1) % 5][col2]; 
        } 
        else { 
            encryptedMessage[i] = playfairMatrix[row1][col2]; 
            encryptedMessage[i + 1] = playfairMatrix[row2][col1]; 
        } 
  
        i += 2; 
    } 
  
    printf("Encrypted Message is: %s\n", encryptedMessage); 
  
    return 0; 
}
