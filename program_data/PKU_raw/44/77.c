int p(int i)//??? 
{
    int s=1;
    for(int j=1;j<=i;j++)
    {
            s=s*10;
    }
    return s;
}
int size(int a)//????????
{
	int b,S=1;
	for(b=1;b<20;b++)
	{
		S=S*10;
		if(S>a)
			break;
	}
	return (b);
}
int reserve(int n)//????? 
{
    int g=0,k;
    if(n==0)//???0??????0 
    {
            g=0;
    }
    else
    {
        k=abs(n);
        int a[32];
        int i,b=size(k);
        memset(a,0,sizeof(a));
        for(i=b-1;i>=0;i--)//????? 
        {
                a[i]=k%10;
                k=k/10;
        }
        for(i=b-1;i>=0;i--)//??????0???????? 
        {
                if(a[i]!=0)
                {
                           break;
                }
        }
        for(int j=i;j>=0;j--)//???????? 
        {
                    g=g+a[j]*p(j);
        }
        if(n<0){g=-g;}//??n????g???? 
    }
    return g;
}
int main()
{
    int i=6;
    while(i--)
    {
              int n;
              cin>>n;
              int a=reserve(n);
              cout<<a<<endl;
    }
    return 0;
}
