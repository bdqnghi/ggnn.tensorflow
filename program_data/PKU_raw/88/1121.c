int main()
{
    char a[31]={0};
    int i=0;
    cin.getline(a,31);
    for(i=0;a[i]!=0;i++)
    if(a[i]>='0'&&a[i]<='9')
    {
                            cout<<a[i];
                            if(a[i+1]<'0'||a[i+1]>'9')cout<<endl;
    }
    getchar();getchar();
    return 0;
}
