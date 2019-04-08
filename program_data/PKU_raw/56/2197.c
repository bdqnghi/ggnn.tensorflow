int main()
{
    char a[6];
    int i=0;
    do{
    a[i]=getchar();
    i++;
    }
    while(a[i-1]!='\n');
    i--;
    for(int j=i-1;j>=0;j--)
    cout<<a[j];
}
