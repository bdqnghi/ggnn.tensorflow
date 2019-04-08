int main()
{
	int a[5],i,j,k,l,m,n,q=0;
	for(i=1;i<=5;i++)
	{
		a[0]=i;
		for(j=1;j<=5;j++)
		{
			a[1]=j;
			for(k=1;k<=5;k++)
			{
				a[2]=k;
				for(l=1;l<=5;l++)
				{
					a[3]=l;
					for(m=1;m<=5;m++)
					{
						a[4]=m;
						if(i!=j&&i!=k&&i!=l&&i!=m&&j!=k&&j!=l&&j!=m&&k!=l&&k!=m&&l!=m&&((a[4]==1)+(a[1]==2)+(a[0]==5)+(a[2]!=1)+(a[3]==1))==2)
						{
							q++;
							if(q==41)
							{
							for(n=0;n<4;n++)
							cout<<a[n]<<" ";
							cout<<a[4];
							break;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}					
