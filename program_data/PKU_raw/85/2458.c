int main()
{
    char str[21];
    int n;
    cin>>n;
    for (;n>0;n--)
    {
        cin>>str;
        int flag=1;
        if(str[0]=='_'||str[0]>='a'&&str[0]<='z'||str[0]>='A'&&str[0]<='Z')
        flag=1;
        else
        flag=0;
        for(int i=1;str[i]!='\0';i++)
        {
                if(str[i]>='0'&&str[i]<='9'||str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'||str[i]=='_')
                continue;
                else
                {
                   flag=0;
                   break;
                }
        }
        if(flag==0)
        cout<<"no"<<endl;
        else
        cout<<"yes" <<endl;
    }       
	return 0;
}
