#include <stdio.h>
#include <string.h>

int main() {
    char input[1001];
    scanf("%s", input);
    int length = strlen(input);

    for (int i = 0; i < length; i++) {
        input[i] = 'a' + ('z' - input[i]);
    }
    printf("%s\n", input);
    return 0;
}
