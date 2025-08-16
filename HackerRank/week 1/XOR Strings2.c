#include <stdio.h>
#include <string.h>

void strings_xor(const char* s, const char* t, char* result) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == t[i]) {
            result[i] = '0';
        } else {
            result[i] = '1';
        }
    }
    result[len] = '\0';  
}

int main() {
    char s[101], t[101], result[101];

    
    scanf("%100s", s);
    scanf("%100s", t);

    strings_xor(s, t, result);
    printf("%s\n", result);

    return 0;
}
