#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sen[1024];
    scanf("%c", &ch);
    scanf("%s%*c", &s);
    scanf("%[^\n]%*c", &sen);
    printf("%c\n%s\n%s", ch, s, sen);
    return 0;
}
