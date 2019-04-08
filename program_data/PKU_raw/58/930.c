int main()
{
    int n,i,j;
    cin>>n;
    char m[20];
    char iflegal[n];
    memset(iflegal,'1',sizeof(iflegal));
    cin.getline(m,20);
    char ch[n][81]; 
    for(i=0;i<n;i++)     //??????? 
    {
        cin.getline(ch[i],81);
    }
    for(i=0;i<n;i++)
    {
        if((ch[i][0]!='_')&&(ch[i][0]<'A'||(ch[i][0]>'Z'&&ch[i][0]<'a')||ch[i][0]>'z'))   //???????????????? 
        {
            iflegal[i]='0';    //???????????'0'
            continue;
        }
        else   //????????? 
        {
            for(j=1;j<strlen(ch[i]);j++)    //?????????? 
            {
                if((ch[i][j]=='_')||(ch[i][j]>='A'&&ch[i][j]<='Z')||(ch[i][j]>='a'&&ch[i][j]<='z')||(ch[i][j]>='0'&&ch[i][j]<='9'))  //????????????????? 
                continue;   //???? 
                else 
                {
                    iflegal[i]='0';  //??????0 
                    break;
                } 
            }
        }
    }
    for(i=0;i<n;i++)
    cout<<iflegal[i]<<endl;
    return 0;
}