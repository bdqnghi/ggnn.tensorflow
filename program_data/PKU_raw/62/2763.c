int main()
{
    char a[500];
    int i;
    gets(a);
    for (i=0;a[i+1]!='\0';i++)
    {
        if (a[i]==' '&&a[i+1]==' ')
        {
             continue; 
                    
        }
        printf("%c",a[i]);
    }
    
     printf("%c",a[strlen(a)-1]);
    

    return 0;
}