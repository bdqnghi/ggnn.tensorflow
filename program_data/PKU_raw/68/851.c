
int main()
{   
	int i,n;
	int a,b;
	int p;
	int fla,flb;
	cin>>n;
	for(i=6;i<=n;i=i+2)
	{   
		for(a=3,b=i-3;a<=b;a=a+2,b=b-2)
			{   
				fla=1;
		        flb=1;
				p=3;
				while(p<=sqrt((double)a))
				{
					if(a%p==0)
					{
						fla=0;
						break;
					}
					else
						p=p+2;
				}
				
				if(fla==0)
					continue;
				
				p=3;
				while(p<=sqrt((double)b))
				{
					if(b%p==0)
					{
						flb=0;
						break;
					}
					else
						p=p+2;
				}
				
				if(flb==0)
					continue;
				else
					{
						cout<<i<<"="<<a<<"+"<<b<<endl;
						break;
				    }
		}

	}
	return 0;


}