void Inverse(char a[])
{
    int len=strlen(a);
    for(int i=0;i<len/2;i++)
    {
        char temp;
        temp=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=temp;
    }
}
int main()
{
    char a[110],b[110];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin.get();
        cin.getline(a,101);
        cin.getline(b,101);
        Inverse(a);
        Inverse(b);
        int j;
        for(j=0;b[j]!='\0';j++)
        {
            if(a[j]>=b[j])
                a[j]=a[j]-b[j]+'0';
            else
            {
                a[j+1]--;
                a[j]=a[j]+10-b[j]+'0';
            }
        }
        while(a[j]<'0'&&a[j]!='\0')
        {
            a[j+1]--;
            a[j]=a[j]+10-b[j]+'0';
        }
        Inverse(a);
        j=0;
        while(a[j]=='0')
            j++;
        while(a[j]!='\0')
          cout<<a[j++];
        cout<<endl;
    }
    return 0;
}
