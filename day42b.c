#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces


    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // ASCII conversion
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
