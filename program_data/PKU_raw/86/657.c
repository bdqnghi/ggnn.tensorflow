int main()
{
	int n,i,j,sum,u[100],x,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int m,a,time=0;
		scanf("%d",&m);
		if(m==0)
			sum=60;
		else
		{
			for(j=0;j<m;j++)
			{   
				scanf("%d",&a);
				time=time+3;
				x=time+a;
				b[j]=x;
			}
			for(j=0;j<m;j++)
			{
				if(b[j]>=63)
				{
					sum=60-3*j;
				    break;
				}
				else if(b[j]>=60&&b[j]<63)
				{
					sum=b[j]-3*(j+1);
					break;
				}
				else if(b[j]<60&&j==m-1)
				{
					sum=60-time;
					break;
				}
			}
		}
		u[i]=sum;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",u[i]);
	}
	return 0;
}
