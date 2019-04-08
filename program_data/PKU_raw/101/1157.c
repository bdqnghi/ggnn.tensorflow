int main()
{
	int i,j,k,m,n,b[3];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			if(i!=j)
				for(k=0;k<3;k++)
				{
					if(k!=i&&k!=j)
					{
						b[0]=(j>i)+(i==k);
						b[1]=(i>j)+(i>k);
						b[2]=(k>j)+(j>i);
						if(b[0]==2-i&&b[1]==2-j&&b[2]==2-k)
						{
							if(i==0)
							{
								if(j==1)cout<<"ABC";
								else cout<<"ACB";
							}
							if(j==0)
							{
								if(i==1)cout<<"BAC";
								else cout<<"BCA";
							}
							if(k==0)
							{
								if(i==1)cout<<"CAB";
								else cout<<"CBA";
							}
						}
					}
				}
		}
		return 0;
}