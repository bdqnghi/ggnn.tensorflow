int main()
{
    char a[500],b[500],c=0;
    gets (a);
    int i,j;
    j=strlen(a);
    for(i=1;a[i]!='\0';i++)
    {
       
        if((a[i]!=' '&&a[i-1]==' ')||a[i-1]!=' ')
        {
            b[c]=a[i-1];
           c++;
        }
    }
    b[c]=a[j-1];
    b[c+1]='\0';
   puts (b);
   return 0;
}
