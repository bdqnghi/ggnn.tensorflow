
int main()
{
    char ch[1000];
    cin.getline(ch,999);
    int len,i;
    len=strlen(ch);
    for(i=0;i<len-1;i++)
    {
        if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))cout<<ch[i];
        else if((ch[i-1]>='a'&&ch[i-1]<='z')||(ch[i-1]>='A'&&ch[i-1]<='Z'))cout<<ch[i];

    }
    cout<<ch[len-1];
    return 0;
}
