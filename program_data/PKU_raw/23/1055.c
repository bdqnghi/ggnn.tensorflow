
void charReverse(char str[], int beg, int end);

int main()
{
    char str[100];
    gets(str);
    int i = 0, j = 0;
    for (; j <= (int)strlen(str); j++) {
        if(str[j] == ' ' || str[j] == '\0') {
             charReverse(str, i, j-1);
             i = j + 1;
        }
    }
    charReverse(str, 0, strlen(str)-1);
    printf("%s\n", str);
    return 0;
}

void charReverse(char str[], int beg, int end)
{
    int i;
    for(i = 0; i < (end - beg + 1) / 2;i++) {
         char ch = str[beg + i];
         str[beg + i] = str[end - i];
         str[end - i] = ch;
    }
}