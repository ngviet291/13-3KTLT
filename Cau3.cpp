#include <stdio.h>
#include <string.h>
void xoakhoangtrangthua(char s[]) {
    int i, j;
    int dodai = strlen(s);
    for (i = 0; i < dodai - 1; i++) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            for (j = i; j < dodai; j++) {
                s[j] = s[j + 1];
            }
            dodai--;
            i--;
        }
    }
    if (s[0] == ' ') {
        for (i = 0; i < dodai; i++) {
            s[i] = s[i + 1];
        }
        dodai--;
    }
    if (s[dodai - 1] == ' ') {
        s[dodai - 1] = '\0';
        dodai--;
    }
}

int main() {
    char s[20];

    printf("Nhap vao mot chuoi ki tu va khoang trong: ");
    gets(s);
	xoakhoangtrangthua(s);
	printf("Chuoi sau khi xoa khoang trong thua: %s\n", s);
	return 0;
}

