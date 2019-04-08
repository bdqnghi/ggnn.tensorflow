
int main()
{
    int i=0,j=0,b[100];
    char a[100];
    gets(a);
    b[0]=0;
    for(i=1;i<strlen(a);i++)
    {
        if(a[i]==a[0])
            b[++j]=i;
        else
            cout<<b[j--]<<" "<<i<<endl;
    }   

    return 0;
}
