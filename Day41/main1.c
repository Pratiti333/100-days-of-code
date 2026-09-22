#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int length = 0;
        
        // Count characters until null terminator or trailing newline
        while (str[length] != '\0' && str[length] != '\n' && str[length] != '\r') {
            length++;
        }
        
        printf("%d\n", length);
    }
    return 0;
}