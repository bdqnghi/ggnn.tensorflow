int common(int,int);


int main()
{
	int x,y;
	cin>>x>>y;
	common(x,y);
	return 0;
}
void tree(int x)
{
	int a[100],i;
	for(i=0;i<100;i++)
		a[i]=1;
	a[0]=x;
	if(x>1)
		for(i=1;x>1;i++)
		{
			if(x%2!=0)
				{
					a[i]=(x-1)/2;
					x=a[i];
			}
			else
			{
				a[i]=x/2;
				x=a[i];
			}
		}
}
int common(int x,int y)
{
	int i,j,t,a[100],b[100];
	for(i=0;i<100;i++)
		{
			a[i]=1;
			b[i]=1;
	}
	a[0]=x;b[0]=y;
	if(x>1)
		for(i=1;x>1;i++)
		{
			if(x%2!=0)
				{
					a[i]=(x-1)/2;
					x=a[i];
			}
			else
			{
				a[i]=x/2;
				x=a[i];
			}
		}
	if(y>1)
		for(i=1;y>1;i++)
		{
			if(y%2!=0)
				{
					b[i]=(y-1)/2;
					y=b[i];
			}
			else
			{
				b[i]=y/2;
				y=b[i];
			}
		}
	if(x>=y)
	{
	    
	    for(i=0;i<100;i++)
			{
				for(j=0;j<100;j++)
					{
						if(b[j]==a[i])
					    {
						   cout<<b[j]<<endl;
						   return 0;
					    } 
				}
		}
	}
	else
	{
		
	    for(i=0;i<100;i++)
			{
				for(j=0;j<100;j++)
				   {
					   if(a[j]==b[i])
					   {
						   cout<<b[i]<<endl;
						   return 0;
				       }
				}
		}
	}

}
