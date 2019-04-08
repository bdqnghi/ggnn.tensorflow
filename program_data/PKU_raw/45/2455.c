int judge(char a[50],char b[50])
{
    int m,n,i=0,k=0;
    m=strlen(a);
    n=strlen(b);
    while(i+m<=n)
    {
        while(a[k]==b[k+i]&&k<m) k++;
        if(k==m)  return i;
        else  i++;

    }
    return -1;
}
int main()
{
   char s[50],w[50];
   scanf("%s %s",s,w);
   printf("%d",judge(s,w));
   return 0;
}