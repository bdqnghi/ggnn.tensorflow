int num,t,yin[50];
void dd(int n, int a,int d ,int m)
{
	int i;
	if(d==m)
	{
		t++;
		return;
	}
	for(i=a;i<num;i++)
	{
		if(n/yin[i]>=yin[i]&&n%yin[i]==0)
			dd(n/yin[i],i,d+1,m);
	}
}
void q_ys(int n)
{
	int i;
	for(i=2;i<=n;i++)
		if(n%i==0)
		{
			num++;
			yin[num]=i;
		}
	return ;
}
int m_ys(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n % i==0 ) 
		{
			return i;
		}
	}
 return 1;
}
void output(int y)
{
	int k=1,i,x;
	x=y;
	t=1,num=0,memset(yin,0,sizeof(yin));
	q_ys(x);
	while(m_ys(x)!=1)
	{
		k++;
		x=x/m_ys(x);
	}
	for(i=2;i<=k;i++)
		dd(y,1,1,i);
	cout<<t<<endl;
}
int main()
{
	int n,i,a[1000];
	t=0,num=0;
	cin>>n;	
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		output(a[i]);
	return 0;


}