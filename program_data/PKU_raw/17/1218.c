
int main()
{
    int left=0,right=0;
    int times=0,i;
    char s[101];
    char c[101];
    char fakes[101];
    
    for (times=0; times==0;i=0,left=0,right=0) {
        scanf("%s",s);
        if (strcmp(fakes, s)==0&&strlen(fakes)==strlen(s)) {
            break;
        }
        for (i=0; s[i]!='\0'; i++) {
            if (s[i]=='(') {
                left++;
            }
            if (s[i]==')'&&left>0) {
                left--;
            }
            else
            if (s[i]==')'&&left==0) {
                c[i]='?';
            }
        }
        for (; i>=0; i--) {
            if (s[i]==')') {
                right++;
            }
            if (s[i]=='('&&right>0) {
                right--;
            }
            else
            if (s[i]=='('&&right==0) {
                c[i]='$';
            }
        }
        puts(s);
        printf("\n");
        for (i=0; s[i]!='\0'; i++) {
            if (c[i]=='?'||c[i]=='$') {
                printf("%c",c[i]);
                c[i]=0;
            }
            else
                printf(" ");
        }
        printf("\n");
        strcpy(fakes,s);
    }
    return 0;
}
