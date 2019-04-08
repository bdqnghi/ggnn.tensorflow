int main()
{
    char a[max];
    char b[max];
    int k[max]={0};
    int i,j;
    gets(a);
    for(i=1;a[i];i++)
    {
      if((a[i]==' ')&&(a[i-1]==' '))
      {
        k[i]=1;
      }
    }
    for(i=0,j=0;a[i];i++)
    {
     if(k[i]==0)
     {
     b[j]=a[i];
     j++;
     }
     else
     {    
         continue;
     }
    }
    b[j]='\0';
    puts(b);
    return 0;
}