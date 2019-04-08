int main()
{
    char s1[11]={0},s2[4]={0},*p;
    int i,n,m;
    while(scanf("%s%s",s1,s2)!=EOF)
    {
          n=strlen(s1);
     p=&s1[0];
     for(i=0;i<n;i++)
     if(*p<s1[i])p=&s1[i];
     m=p-&s1[0]+1;
     for(i=0;i<m;i++)
     printf("%c",s1[i]);
     printf("%s",s2);
     for(i=m;s1[i]!=0;i++)
     printf("%c",s1[i]);
     printf("\n");
     }
}
