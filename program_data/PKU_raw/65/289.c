int main()
{
	int n,a=0,b=0,i;
	int A,B;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&A,&B);
		if(A!=B)
		{
			if(A==0)
			{
				if(B==1)
					a++;
				else
					b++;
			}
				if(A==1)
			{
				if(B==2)
					a++;
				else
					b++;
			}
					if(A==2)
			{
				if(B==0)
					a++;
				else
					b++;
			}
		}
	}
	if(a>b)
		printf("A");
	if(a<b)
		printf("B");
	if(a==b)
		printf("Tie");
	return 0;
}