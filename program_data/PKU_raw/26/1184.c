    int main()
{
    char a[1000];
    gets(a);
    while(1)
    {
         for(int i=0;a[i]!='\0';i++)
         {
             if(a[i]==' '&&a[i+1]==' ')
             {
                 for(int j=i;a[j]!='\0';j++)
                 {
                     a[j]=a[j+1];
                 }
             }
         }
         int z=0;
         for(int i=0;a[i]!='\0';i++)
         {
             if(a[i]==' ')
             {
                 if(a[i+1]==' ')
                 {
                     z++;
                 }
             }
         }
         if (z==0)
         {
             break;
         }
    }
    puts(a);
    return 0;
}
