int main()
{
    int j,i,a[1000]={0},l,count=0;
    char s[1000];
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
                    if(s[i]!=' ')
                    a[i]=1;
   }
   i=0;
   while(i<l)
   {
    if(a[i]==0)
    count++;
    if(a[i]==1 && count !=0)
    {
       for(j=i+1-count;j<l+1-count;j++)
       {
                                       s[j]=s[j+count-1];
                                       a[j]=a[j+count-1];
       } 
       l=l-count+1;
         i=i-count+1;
         count=0;
    } 
       
    i++;
    }
    for(i=0;i<l;i++)
    printf("%c",s[i]);
    getchar();
    getchar();
}