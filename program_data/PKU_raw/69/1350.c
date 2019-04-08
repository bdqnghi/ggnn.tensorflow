void cal(int a[],int b[],int l1,int l2)
{
	for(int i=0;i<l1;++i)
	{
		a[i]+=b[i];
		if(a[i]>=10)
		{
			++a[i+1];
			a[i]-=10;
		}
	}
	
	int j=l1;
	for(;a[j]==0&&j>=0;--j);
	if(j==-1)
		cout<<"0";
	else
	{
	for(int i=j;i>=0;--i)
		cout<<a[i];
	}
}
int main()
{  
	int l1=0,l2=0;
    char a[300],b[300];
	int c[300]={0},d[300]={0};
	cin>>a>>b;
	for(int i=0;a[i]!=0;++i){++l1;}
	for(int i=0;i<l1;++i)
	c[i]=a[l1-1-i]-'0';
	for(int i=0;b[i]!=0;++i){++l2;}
	for(int i=0;i<l2;++i)
	d[i]=b[l2-1-i]-'0';
	if(l1>=l2)
	cal(c,d,l1,l2);
	else
	cal(d,c,l2,l1);
	
	return 0;
}
