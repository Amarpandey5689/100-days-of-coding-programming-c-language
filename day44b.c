#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
