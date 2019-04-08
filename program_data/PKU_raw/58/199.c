int main()
{
char s[1000];
int n,f,k;k=0;
scanf("%d",&n);getchar();
for(k=0;k<n;k++)
{gets(s);
                   f=1;
              if(s[0]=='_'||(s[0]<='Z'&&s[0]>='A')||(s[0]<='z'&&s[0]>='a'))           
                         {for(int i=0;i<strlen(s);i++)
                         {
                         /*if(s[i]=='_'||(s[i]>='A'&&s[i]<='Z')||(s[i]<='z'||s[i]>='a')||(s[i]>='0'&&s[i]<='9'));
                         else
                         {
                          f=0;break;
                          }*/
                          if(s[i]<48||(s[i]>57&&s[i]<65)||(s[i]>90&&s[i]<95)||(s[i]>95&&s[i]<97)||s[i]>122)
                          {
                          f=0;break;
                          }
                          }}
                          else f=0;
                          printf("%d\n",f);
                         }                   
}
