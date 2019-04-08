int main()
{
  char a[65535],b[65535];
  gets(a);
  int l=strlen(a);
  b[0]=a[0];
  for(int i=1,k=1;a[i]!='\0';i++)
  {
    if(a[i-1]==' '&&a[i]==' ')
    {}
    else
    {b[k]=a[i];
    k++;
    }
  }
  puts(b);
  
  getchar();
  getchar();
}
