int main()
{
    char a[1001];
    cin.getline(a,1001);
    int i,j;
    char tep;
    for(i=0;a[i];i++)
    {
        if(a[i]<='z'&&a[i]>='a')a[i]=a[i]-'a'+'A';}
        for(i=0;a[i];)
    {
        tep=a[i];   j=0;
        while(a[i]==tep){j++;i++;}

        cout<<"("<<tep<<","<<j<<")";
    }
    return 0;
}
