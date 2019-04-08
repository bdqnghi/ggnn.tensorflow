int anyil(char*,int);
int first(char);
int main()
{
    int i,j,n;
    cin>>n;
    cin.get();
    for(i=0;i<n;i++)
    {
        char str[1000];
        int i,l,out;
        cin.getline(str,800);
        for(i=0;str[i]!='\0';i++)//????
        l=i+1;
        out=anyil(str,l)&&first(str[0]);//????out?1
        cout<<out<<endl;
    }
    return 0;
}
int anyil(char x[],int l)//??????????????????1
{
    int i,flag=1;
    for(i=0;i<l;i++)
    {
        if (x[i]=='_'||(x[i]>='0'&&x[i]<='9')||(x[i]>='a'&&x[i]<='z')||(x[i]>='A'&&x[i]<='Z'));
        else flag=0;
    }
    return flag;
}
int first(char x)//??????????????????1
{
    int flag;
    if (x=='_'||(x>='a'&&x<='z')||(x>='A'&&x<='Z')) flag=1;
    else flag=0;
    return flag;
}

