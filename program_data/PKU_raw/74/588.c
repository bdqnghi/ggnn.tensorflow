
int ss(int x)
{
	int i,a=0;
	double y;
	y=x;
	if(x>2&&x%2==0)a++;
	else
	{
		for(i=3;i<sqrt(y)+1;i++){
			if(x%i==0)a++;
		}
	}
	return a;
}

int hw(int x)
{
	int a[10]={0},b[10]={0},i,j=0,n=1000000000,m=0,jl=0;
	for(i=0;i<9;i++)
	{
		n=n/10;
		if(x/n!=0||jl!=0)
		{
			a[m]=x/n;
			m++;
			x=x-(x/n)*n;
			jl++;
		}
	}
	for(i=0;i<m;i++)
	{
		b[m-1-i]=a[i];
	}
	for(i=0;i<m;i++)
	{
		if(b[i]!=a[i])j++;
	}
	return j;
}

int main()
{
	int m,n,i=0,js=0;
	cin>>m>>n;
	m--;
	while(m++,m<=n)
	{
		//cout<<m<<"-"<<ss(m)<<"-"<<hw(m)<<endl;
		if(ss(m)==0&&hw(m)==0)
		{
			if(i==0)
			{
				cout<<m;
				i++;
				js++;
			}
			else cout<<","<<m;
		}
	}
	if(js==0)cout<<"no"<<endl;
	return 0;
}
