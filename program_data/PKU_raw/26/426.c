int main()
{
    int i,j,n,a[100];char s[101];
    gets(s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
      if(s[i]==' '&&s[i+1]==' ')
      {
      for(j=i;j<n;j++) 
       s[j]=s[j+1];
        n--;
        s[n]='\0';
        i=0;
      }
      }
    puts(s);
    getchar();getchar();
}
