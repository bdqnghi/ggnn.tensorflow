/** c version **/


int isDigit(char ch) {
    if (ch == '\0') return -1;
    if ('0' <= ch && ch <= '9') return 1;
    return 0;
}

int main() {
    char *p = (char *) malloc(40 * sizeof(char));
    gets(p);
    do {
        p--;
        while (isDigit(*(++p)) == 0) {} // ignore non-digit chars
        p--;
        while (isDigit(*(++p)) == 1)
            printf("%c", *p);
        printf("\n");
    } while (*p != '\0');
    return 0;
}
