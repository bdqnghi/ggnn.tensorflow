int main()
{
	int d,ma1,ma2;
	char c;
	scanf("%d",&d);
	ma1=d;
	ma2=d;
	c=getchar();
	while(c!='\n')
	{
		scanf("%d",&d);
		if (d>ma1)
		{
		ma2=ma1;
		ma1=d;
		}
		else if ((d<ma1)&&(d>ma2))
			ma2=d;
		else if((d<ma2)&&(ma1==ma2))
			ma2=d;

		c=getchar();
	}
       
	if (ma1==ma2)  printf("No");
	else printf("%d",ma2);
	return 0;
}