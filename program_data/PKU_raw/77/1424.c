int main()
{
    char ch[100];
    cin>>ch;
    int len=(int)strlen(ch);
    for (int i=0;i<len;i++)
    {
        if (ch[i]==')'||ch[i]=='}'||ch[i]==']'||ch[i]=='>')
        {
            int j=i;
            while (ch[j]!='('&&ch[j]!='{'&&ch[j]!='['&&ch[j]!='<')
                j--;
            cout<<j<<" "<<i<<endl;
            ch[i]='%';
            ch[j]='%';
        }
    }
	return 0;
}