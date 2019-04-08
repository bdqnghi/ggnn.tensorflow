
int main()
{
    char s[1001];
    cin>>s;
    int len=strlen(s);
    int i=0,j,k;
    int flag=0;
    while(i<len)
    {
        flag=0;
        while(1)
        {
            if(s[i]==s[i+1]||s[i]==s[i+1]+32||s[i+1]==s[i]+32)   {flag++;i++;}      //??????????
            else
            {
                cout<<"("<<(char)(s[i]<90?s[i]:s[i]-32)<<","<<flag+1<<")";       //???????????????????
                i++;
                break;
            }
        }
    }
    return 0;
}
