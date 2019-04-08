int main()
{
    char a[200],b[200];
    gets(a);
    int n=strlen(a);
    int i,flag=0,t=0;
    for(i=0;i<n;i++)
    {
        if((a[i]==' ')&&t==0)

           {b[flag++]=a[i];t=1;}
           else if(a[i]!=' ')
           {b[flag++]=a[i];t=0;}
           else if(a[i]==' '&&t!=0)
           continue;

    }
    for(i=0;i<flag;i++)
    printf("%c",b[i]);
}
