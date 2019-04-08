void last_to_first (int *point,int lenth_of_n);

void main ()
{
	int num[100];
	int n,m;
	int i;
	int *point=num;

	scanf("%d %d",&n,&m);

	for(i=0;i<n;i++)
	{
		scanf("%d",point);
		point++;
	}

	for(i=0;i<m;i++)
	{
		last_to_first (num,n);
	}

	point=num;
	for(i=0;i<n;i++)
	{
		if(i!=0) printf(" ");
		printf("%d",*point);
		point++;
		
	}

}

void last_to_first (int *point,int lenth_of_n)
{	
	int last;
	int i;
	point=(point+lenth_of_n-1);
	last=*point;

	for (i=1;i<lenth_of_n;i++)
	{
		*(point)=*(point-1);
		point=point-1;
	}

	*point=last;
}
