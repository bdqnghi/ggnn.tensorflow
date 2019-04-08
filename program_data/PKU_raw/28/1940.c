int main()
{
    int num=0,i;
    char a[10000];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]!=' ')
        {
            num++;
            if(i==strlen(a)-1)
            {
                printf("%d",num);
            }
        }
        else if(a[i]==' '&&a[i+1]!=' ')
        {
            printf("%d,",num);
            num=0;
        }
    }   
   return 0;
}
