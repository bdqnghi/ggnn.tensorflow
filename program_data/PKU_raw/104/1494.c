int a[12];
int b[12];
void path(int x,int y)
{
	int i,j,n1,n2,t=0;
	for(i=1;i<=10;i++)
	{
		if((int)pow(2.0,(double)(i-1))<=x&&x<(int)pow(2.0,(double)i)) 
		{	n1=i;
			break;
		}
	}
	a[1]=x;
	for(i=2;i<=n1;i++)
	{
		a[i]=(a[i-1]-(int)pow(2.0,(double)(n1-i+1))+2)/2+(int)pow(2.0,(double)(n1-i))-1;
	}
    for(j=1;j<=10;j++)
	{
		if((int)pow(2.0,(double)(j-1))<=y&&y<(int)pow(2.0,(int)j)) 
		{	n2=j;
			break;
		}
	}
	b[1]=y;
	for(j=2;j<=n2;j++)
	{
		b[j]=(b[j-1]-(int)pow(2.0,(double)(n2-j+1))+2)/2+(int)pow(2.0,(double)(n2-j))-1;
	}
	for(i=1;i<=n1;i++)
	{
		if(t==1) break;
		for(j=1;j<=n2;j++)
		{
			if(a[i]==b[j])
			{
				t=t+1;
				cout<<a[i]<<endl;
				break;
			}
		}
	}
}
int main()
{
	int x,y;
	cin>>x>>y;
	path(x,y);
	return 0;
}





