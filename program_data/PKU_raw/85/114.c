int main()
{
    char s[100];
    int n, k, m, i, j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        for(j=0;s[j]!='\0';j++)
        {
            if(j==0)
            {
                if(s[j]=='_'||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z'))
                continue;
                else
                {
                    cout<<"no"<<endl;
                    break;         
                }
            }
            if(j>0)
            {
                if(s[j]=='_'||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'))
                {
                if(s[j+1]=='\0')
                    cout<<"yes"<<endl;
                continue;
                }
                else
                {
                    cout<<"no"<<endl;
                    break;                                
                }
            }
        }
    }
	return 0;
}
