int main()
{
    char ch,ar, str[301];
    int i,j, len, nu1=1,nu2=1,counter1[26]={0},counter2[26]={0};
    scanf("%s", str);
    len = strlen(str);
    for (i=0; i<len; i++) {
        ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            counter1[ch-'A']++;
            nu1= 0;
            }
        }
    for (ch='A'; ch<='Z'; ch++) {
        if (counter1[ch-'A'] > 0) {
            printf("%c=%d\n", ch, counter1[ch-'A']);
            nu1= 0;
            }
        }
    for (j=0; j<len; j++) {
        ar = str[j];
        if (ar >= 'a' && ar <= 'z') {
            counter2[ar-'a']++;
            nu2= 0;
            }
        }
    for (ar='a'; ar<='z'; ar++) {
        if (counter2[ar-'a'] > 0) {
            printf("%c=%d\n", ar, counter2[ar-'a']);
            nu2= 0;
            }
        }

    if (nu1) {
        if(nu2) {
              printf("No");
              }
        }
    return 0;
}
