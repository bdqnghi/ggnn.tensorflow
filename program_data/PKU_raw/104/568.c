
int two(int n)
{
	int m=1,i;
	
	for(i=0;i<=n;i++)
	{
		if(i==0)
		{
			m=1;
		}
		else
		m=m*2;
	}
	return(m);
}


int main()
{
	int two(int n);
    int zhao(int x,int y,int row1,int flag);
	int x,y,i,row1,row2,flag=0,t;
	scanf("%d %d",&x,&y);
	for(i=0;i<=10;i++)
	{
		if(x==two(i))
		{
			row1=i;
		
		}
		else
		{
			if(x>two(i)&&x<two(i+1))
			{
				row1=i;
				
			}
		}
	}
	
	for(i=0;i<=10;i++)
	{
		if(y==two(i))
		{
			row2=i;
		
		}
		else
		{
			if(y>two(i)&&y<two(i+1))
			{
				row2=i;
			
			}
		}
	}
    if(x==y) printf("%d",x);
	else if(x>y)
	{
	
		t=zhao(x,y,row1,flag);
			if(t==0)
			{
				for(i=1;i<=row2;i++)
				{
				if(y%2==0)
				{
					y=y/2;
				}
				else y=(y-1)/2;
			
				t=zhao(x,y,row1,flag);
				if(t==1) 
				{
					break;
				}
			}
			}
			
		
	}
	else if(y>x)
	{
		t=zhao(y,x,row2,flag);
			if(flag==0)
			{
				for(i=1;i<=row1;i++)
				{
				if(x%2==0)
				{
					x=x/2;
				}
				else x=(x-1)/2;
				t=zhao(y,x,row2,flag);
				if(t==1)
				break;
			}
			}
			
		
	}


	


	return 0;
}

int zhao(int x,int y,int row1,int flag)
{
	int i;
	for(i=1;i<=row1;i++)
		{
			if(x%2==0)
			{
				x=x/2;
			}
			else x=(x-1)/2;
			if(x==y) 
			{
				printf("%d",x);
				flag=1;
				break;
				
			}
			else continue;
	}
	return (flag);
}