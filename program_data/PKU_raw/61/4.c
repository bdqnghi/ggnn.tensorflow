int main()
{
	int num=0, n=0, i=0, j=0, p=1, q=1, temp=0, a;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &num);
		if(num == 1 || num == 2)
			printf("1\n");
		else
		{
			for(j=3; j<=num; j++)
			{			
				a=p+q;		
				p=q;			
				q=a;		
			}		
			printf("%d\n", a);
			a=0;
			p=1;
			q=1;
		}
	}
	return 0;
}