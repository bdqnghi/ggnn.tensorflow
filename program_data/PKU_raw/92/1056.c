int main()
{
	int a[1000]={0},b[1000]={0};
	void move(int x[],int y);
	void list(int x[],int y);
	while(true)
	{
		int t,j,i,max;
		cin>>t;
		if(t!=0)
		{
			for(i=0;i<=t-1;i++)
				cin>>a[i];
			for(i=0;i<=t-1;i++)
				cin>>b[i];
			list(a,t);
			list(b,t);
			for(j=0;j<=(t-1)/2;j++)
			{
				int money=0;
				for(i=0;i<=t-1;i++)
				{
					if(a[i]<b[i])
						money--;
					if(a[i]>b[i])
						money++;
				}
				if(j==0)
					max=money;
				if(max<money)
					max=money;
				move(a,t-1);
			}
			cout<<max*200<<endl;
		}
		else
			return 0;
	}
}

void move(int x[],int y)
{
	int temp,i;
	temp=x[y];
	for(i=y-1;i>=0;i--)
		x[i+1]=x[i];
	x[0]=temp;
}
void list(int x[],int y)
{
	int i,j,temp;
	for(i=0;i<=y-1;i++)
		for(j=i;j<=y-1;j++)
		{
			if(x[i]<x[j])
			{
				temp=x[j];
				x[j]=x[i];
				x[i]=temp;
			}
		}
}
