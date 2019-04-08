int main()
{
    int i,j,n;
    cin>>n;
    char l[1];

    while(n>0)
    {
        cin.getline(l,1);
        char a[100],b[100],c[100];
        cin.getline(a,100);
        cin.getline(b,100);
        int len1=strlen(a),len2=strlen(b);
        for(i=len1-1;i>=len1-len2;i--)
        {
            b[i]=b[i+len2-len1];
        }
        for(i=0;i<len1-len2;i++)
        {
            b[i]=48;
        }
        b[len1]='\0';

        for(i=len1-1;i>=0;i--)
        {
            c[i]=a[i]-b[i]+48;
            if(c[i]<48){c[i]=a[i]-b[i]+58;a[i-1]=a[i-1]-1; }
        }
        i=0; c[len1]='\0';
        while(c[i]==0&&strlen(c)>1)
        {
            for(j=0;j<len1;j++ )
            {
                c[j]=c[j+1];

            }
        }
        cout<<c<<endl;
        n--;
    }
    return 0;
}
