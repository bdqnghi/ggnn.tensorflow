int main()
{
    int n,i,j,l;
    char s[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         memset(s,0,sizeof(s));
         scanf("%s",s);
         l=strlen(s);
         if(s[l-1]=='r') {for(j=0;j<l-2;j++) printf("%c",s[j]);printf("\n");}
         if(s[l-1]=='y') {for(j=0;j<l-2;j++) printf("%c",s[j]);printf("\n");} 
         if(s[l-1]=='g') {for(j=0;j<l-3;j++) printf("%c",s[j]);printf("\n");}         
    }
    }
