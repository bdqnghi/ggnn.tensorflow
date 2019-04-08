void main()
{
	int input[8][8],a=0,b=0,m=0,i=0,j=0,k=0,hang=0,lie=0;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++) input[i][j]=0;
	}
	scanf("%d,%d",&a,&b);
	printf("\n");


	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
			scanf("%d",&input[i][j]);
		printf("\n");
	}
	for(i=0;i<a;i++)
	{
		k=0;
		for(j=1;j<b;j++)
		{
			if(input[i][k]<input[i][j]) k=j;//?????????
		}
		for(m=0;m<a;m++)
		{
			if(input[i][k]>input[m][k]) break;//??????
		}
		if(m==a)
		{
			hang=i;
			lie=k;
			break;
		}
		else hang=9;
   }
	if(hang==9) printf("No\n");

	else printf("%d+%d\n",hang,lie);
}