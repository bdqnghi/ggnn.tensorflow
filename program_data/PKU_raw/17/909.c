
int main()
{
    char s[120];
    while(cin>>s)
{
    char res[120];//result
    int lens;
    int leftnum=0;//remaining leftnum
    int left[120];
    lens=strlen(s);
    for(int i=0;i<lens;i++)
        res[i]=' ';
    for(int i=1;i<120;i++)
      left[i]=-1;
    for(int i=0;i<lens;i++)
    {
        if( s[i]=='(' )
            left[++leftnum]=i;
        if( s[i]==')' )
        {
            if(leftnum==0)
              res[i]='?';
            else
            {
              left[leftnum]=-1;
              leftnum--;
            }
        }        
    }
    for(int i=1;i<=leftnum;i++)
        res[left[i]]='$';
    for(int i=0;i<lens;i++)
        cout<<s[i];
    cout<<endl; 
    for(int i=0;i<lens;i++)
        cout<<res[i];
    cout<<endl;
}
    
    return 0;
}
