int min (int m,int n)
{
	if (m<n) return m;
	else return n;
}
int main()
{
	int x,y,a[100],b[100],i,j,k,p,m,n,x0,y0;
	cin>>x>>y;
	x0=x;
	y0=y;
	for(i=0;x>=1;i++)
	{
		a[i]=x;
		x=x/2;
	}	
	m=i;																				//m??????????????a[m-1];
	for(i=0;y>=1;i++)
	{
		b[i]=y;
		y=y/2;
	}	
	n=i;
	int flag=0;
	for(i=0;i<min(m,n);i++)
	{
		if(a[m-1-i]!=b[n-1-i])
		{
			flag=a[m-i];
			break;
		}
	}
	if(flag!=0) cout <<flag;
	else cout <<min(x0,y0);
	return 0;
}
