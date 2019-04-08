

int main()
{
    int i,j,k,n;
    char a[100],b,g;
    cin.getline(a,100);
    for(n=0; a[n]!='\0'; n++);
    b=a[0];
    for(i=0; a[i]==b; i++);
    g=a[i];
    for(i=0; i<n/2; i++)
    {
        for(j=0; a[j]!=g; j++);
        for(k=j; a[k]!=b; k--);
        cout<<k<<" "<<j<<endl;
        a[k]='0';
        a[j]='0';

    }
    return 0;
}
