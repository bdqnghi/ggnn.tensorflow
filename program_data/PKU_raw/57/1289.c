int main()
{
    int n,m,i;
    scanf("%d",&n);
    char a[33];
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
      m=strlen(a);
      if((a[m-2]=='e'&&a[m-1]=='r')||(a[m-2]=='l'&&a[m-1]=='y')){
          a[m-2]='\0';
      }else{
          a[m-3]='\0';
      }
      printf("%s\n",a);
    }
    return 0;
}