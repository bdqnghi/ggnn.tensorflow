
int main()
{
	
	int i,len,j,k,count;
	char a[1000],b,g;
	cin>>a;
	b=a[0];
	len=strlen(a);
	count=len/2;
	for(i=1;i<=len-1;i++)
	{
		if(a[i]!=b)
		{
			g=a[i];break;
		}
	}
	for(j=0;j<=len-1;j++)
	{
			if(a[j]==g)
			{
				
				for(k=j-1;k>=0;k--)
				{
					
					if(a[k]=='o')
					{
						continue;
					}
					if(a[k]==b)
					{
						cout<<k<<" "<<j;
						if(count!=0)
						{
							cout<<endl;
						}
						count--;
						a[k]='o';
						a[j]='o';
						break;
					}
				}
			}
	}
	return 0;
}
	
		
	








