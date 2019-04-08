int main()
{
	int m,i,j,k,population;
	int sum=0;
	scanf("%d\n",&population);
	for(i=0;i<population;i++)
	{
		scanf("%d",&m);
		if(m==0)
		printf("60\n");
		else
		{	for(j=0;j<m;j++)
		{	scanf("%d",&k);
		    if(3*j+3+k<60 )
			{
				sum=57-3*j;
			}
			else if ( 3*j+k<60)
			{
				sum=k;}
		}
		printf("%d\n",sum);}
	}
}

		