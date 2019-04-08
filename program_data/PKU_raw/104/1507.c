int main ()
{
	int i,j,x,y,p,q,m,n;
	cin>>x>>y;
	for(i=0;i<11;i++)
	{
		if(pow(2.0,i)>x)   {p=i;m=x-pow(2.0,i-1)+1;break;}
	}
	for(i=0;i<11;i++)
	{
		if(pow(2.0,i)>y)    {q=i;n=y-pow(2.0,i-1)+1;break;}
	}
	for(;;)
	{
		if(p==q)
		{
			if(m==n)   {cout<<pow(2.0,p-1)+m-1;return 0;}
			else
			{
				for(;;)
				{
					p--;q--;
				    if(m%2==0)  m=m/2;
			        else if(m%2==1)  m=m/2+1;
					if(n%2==0)  n=n/2;
			        else if(n%2==1)  n=n/2+1;
					if(m==n)break;
				}
			}
		}
		else if(p>q)
		{
			p--;
			if(m%2==0)  m=m/2;
			else if(m%2==1)  m=m/2+1;
		}
		else
		{
			q--;
			if(n%2==0)  n=n/2;
			else if(n%2==1)  n=n/2+1;
		}
	}
	return 0;
}

 
 
 
