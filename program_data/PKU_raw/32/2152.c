

int main()
{
    char s1[102],s2[100];
    int a,b,i,j,n,d;
    cin >> n;
    gets(s1);
    for(i=0;i<n;i++)
    {
        gets(s1);
        gets(s2);
        a=strlen(s1);
        b=strlen(s2);
        d=0;
        for(j=b-1;j>=0;j--)
        {
            d=s1[j-b+a]-s2[j]+d;
            if (d>=0) {
                s1[j-b+a]=d+'0';
                d=0;
            }
            else {
                s1[j-b+a]=d+'0'+10;
                d=-1;
            }

        }
        while(d==-1&&j-b+a>=0){
            d=s1[j-b+a]-1-'0';
            if (d>=0) {
                s1[j-b+a]=d+'0';
                break;
            }
            else {
                s1[j-b+a]='9';
                d=-1;
            }
            j--;
        }
        j=0;
        while(s1[j]=='0')j++;
        while(j<a)
        {
            cout<<s1[j];
            j++;
        }
        cout<<endl;
        gets(s1);
    }
}
