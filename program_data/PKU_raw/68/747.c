
int main()
{
	int n,i,j,k,su,su2,q=0;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(j=3;(2*j)<=i;j=j+2)
		{
			su=j;
			su2=i-su;
			for(k=3;(k*k)<=i;k=k+2)
			{
			if((((su%k)==0)&&(su>k))||(((su2%k)==0)&&(su2>k)))
			{
			q=1;
			break;
			}
			}
			if(q==0)
			{
			printf("%d=%d+%d\n",i,su,su2);
		    break;
			}
			else
			q=0;
				
		}
	}
}