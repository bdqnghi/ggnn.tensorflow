

int main()
{
	int s1=0,s2=0,i,j;
	int a,b;
	int n;
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		s1=s1+i*i;
	}
	

	for(j=1;j<=n;j++)
	{
		a=j%10;
     	b=j/10;


		if(a==7||b==7||j%7==0)
		{
			s2=s2+j*j;
		}
	}


	printf("%d",s1-s2);
	return 0;
}



