
char a[1000][41];
int n;

void y(int b)
{
	int i;
	int x=0;
	for(i=b;;i++)
	{
		x=x+strlen(a[i]);
		if(x==80)
		{
			cout<<a[i]<<endl;
			if(i==n-1) break;
			y(i+1);
		}
		if(x+1<=80)
		{
			if(x+1+strlen(a[i+1])<=80)
			{
				if(i<n-1)
				{
					x=x+1;
					cout<<a[i]<<" ";
					continue;
				}
				if(i==n-1) 
				{
					cout<<a[i]<<endl;
					exit(1);
				}
			}
			if(x+1+strlen(a[i+1])>80)
			{
				cout<<a[i]<<endl;
				if(i==n-1) break;
				y(i+1);
			}
		}
	}
}

int main()
{
	int p;
	cin>>n;
	for(p=0;p<n;p++)
	{
		cin>>a[p];
	}
	y(0);
	return 0;
}
