int Fz(int,int);
int main()
{
    int n,num[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
       num[i]=Fz(a,2);
    }   
for(int i=0;i<n;i++){
	cout<<num[i]<<endl;
}
    return 0;
}
int Fz(int x,int m)
{
    int s=1,i;
    int y=(int)sqrt((double)x);
    for(i=m;i<=y;i++)
    {
        if(x%i==0)
        {
        s=s+Fz(x/i,i);
        }
    }  
    return s;
}
