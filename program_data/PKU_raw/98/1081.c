
int main()
{
    char a[100],*p;
    int n;
    cin>>n;
    int num;
    cin>>a;
    int len=strlen(a);
    p=a;
    cout<<endl;
    num=len;
    cout<<p;
    for (int i=1;i<n;i++)
    {  
                   cin>>a;
                   int len=strlen(a);
                   p=a;
                   if (num+len+1>80) {cout<<endl;num=len;cout<<p;}
                   else {num+=len+1;cout<<' ';cout<<p;}
    }
    
    return 0;
}

