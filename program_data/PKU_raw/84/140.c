int main()
{
	int r,i,max1=0,max2=0;
	int score[100];
	scanf("%d",&r);
    for(i=0;i<=r-1;i++)
	{
		scanf("%d",&score[i]);
	}
	for(i=0;i<=r-1;i++)
	{
		if(score[i] > max1 )
		{
max2 = max1;

			max1 = score[i];
					}
		else if( score[i] > max2 )
			max2 = score[i];

	 }
	printf("%d\n%d",max1,max2);
	 return 0;
}
