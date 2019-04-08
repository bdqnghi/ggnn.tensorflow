int main()
{
    int l,i,j;
    char a[100];
    gets(a);
    l=strlen(a);    
    for(i=1;i<l;i++)
        if(a[i-1]==' '&&a[i]==' ')
        {
            for(j=i;j<l;j++)
                a[j]=a[j+1];
            i--;
        }
    puts(a);
}