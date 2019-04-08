

int main()
{
    int i=0,j=0,n;
    char a[150][150],b;
    while((b=cin.get())!='\n')
    {
        if(b==' ')
        {
            a[i][j]='\0';
            i=i+1;
            j=0;
        }

        else
        {
            a[i][j]=b;
            j++;
        }
    }
    a[i][j]='\0';
    n=i;
    for(i=n; i>=1; i--)
        cout<<a[i]<<" ";
        cout<<a[0]<<endl;
    return 0;
}
