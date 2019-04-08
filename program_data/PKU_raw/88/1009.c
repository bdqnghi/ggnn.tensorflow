int main()
{
    char a[31],b[31];
    int j=0,n,x;
    gets(a);
    j=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            if(j==0)continue;
            b[j]='\0';
            printf("%s\n",b);
            j=0;
        }
    }
    b[j]='\0';
    printf("%s\n",b);
    return 0;
}
