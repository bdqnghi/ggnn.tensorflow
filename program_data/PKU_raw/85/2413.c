int main()
{
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++)
    {
        char str[80];
        cin.getline(str,80);
        int j=0;
            if(!((str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z')||str[0]=='_'))
            cout<<"no"<<endl;
            else
            {
        for(j=1;str[j]!='\0';j++)
        {
            if(!((str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9')||str[j]=='_'))
            {
            cout<<"no"<<endl;
            break;
            }
        }
        if(str[j]=='\0')
        cout<<"yes"<<endl;
            }
    }
   
    return 0;
}
            
             
