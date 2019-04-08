int main()
{
    int n,i,a;
    char s[50];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        a=strlen(s);
        if((s[a-1]=='r'&&s[a-2]=='e')||(s[a-1]=='y'&&s[a-2]=='l'))
             a=a-2;
        else if(s[a-1]=='g'&&s[a-2]=='n'&&s[a-3]=='i')
             a=a-3;
        for(int j=0;j<a;j++)
           printf("%c",s[j]);
        printf("\n");
     }
     return 0;
}