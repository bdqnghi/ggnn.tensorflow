



int main()
{
    int i,j=0,k=0;
    char a[10000]={' '},s[100][100];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]!=' ')
        {s[k][j]=a[i];
        j++;}
        if(a[i]==' '&&a[i+1]!=' ')
        {
            k++;j=0;}
     }
     cout<<s[k];
     for(i=k-1;i>=0;i--)
     cout<<" "<<s[i];
    return 0;
}
