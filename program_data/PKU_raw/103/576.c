                                     
main()
{
int j=1,i=0;
char s[1001],s2[1001];
gets(s);
for(;i<=1000;i++)
{
   if('a'<=s[i]&&s[i]<='z')
   s2[i]=(s[i]-'a'+'A');
   else s2[i]=s[i];
   }
                 
for(i=0;i<=1000&&(s2[i]!='\0');i++)
{
    if(s2[i]==s2[i+1])
    j++;
    else 
    {
     printf("(%c,%d)",s2[i],j);
     j=1;
     }
}
}                   