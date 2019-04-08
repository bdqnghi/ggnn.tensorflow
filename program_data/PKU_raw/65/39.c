int main()
{
	int n,i,a,b,c,A=0,B=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		if(a==b)
		{
			continue;
		}
		else 
		{
			if((a==2&&b==0)||(a==0&&b==2))
		{
			c=a;
			a=b;
			b=c;
		}
			if(a<b)
			{
				A++;
			}
			else
			{
				B++;
			}
		}
	}
		if(A==B)
		{
			printf("Tie");
		}
		else 
		{
			if(A>B)
			{
				printf("A");
			}
			else
			{
				printf("B");
			}
		}
	return 0;
}
				
