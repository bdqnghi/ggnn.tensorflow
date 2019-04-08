int main()
{
    int i,m;
    char a[1000];
    gets(a);
    m=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            if(a[i+1]==' ')
            {
                continue;
            }else{
                printf("%c",a[i]);
            }
        }else{
            printf("%c",a[i]);
        }
    }
    return 0;
}


