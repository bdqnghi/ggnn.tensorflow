char str[510];
int flag[510]={0};
int check( int head, int n )
{
    if(n==0)
        return 1;
    if(n==-1)
        return 1;
    if(str[head]==str[head+n])
    {
        return check(head+1,n-2);      
    }
    else return 0;
}
int main()
{
    int len, i, m=1, k;
    cin.getline( str , 500 );
    len = strlen(str);
    for(m=1; m<len; m++)
    {
        for(i=0; i<=len-m; i++)
        {
            if(check(i,m)==1)
            {
                for(k=i;k<=i+m;k++) 
                {
                    cout<<str[k];                
                }            
                cout<<endl;
            }              
        }
    }
    return 0;
}
