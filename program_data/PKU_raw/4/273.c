int main()
{
	int s[100][100],l,h,i,j,hang,lie;
	scanf("%d%d",&lie,&hang);
	for(l=0;l<lie;l++)
	{
		for(h=0;h<hang;h++)
		{
			scanf("%d",&s[h][l]);
		}
	}
	for(i=0;i<hang+lie-1;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(j>hang-1)
			{
				j=hang-1;
			}
			h=j;
			l=i-h;
			if(l>lie-1)
			{
				break;
			}
			printf("%d\n",s[h][l]);
		}
	}
	return 0;
}
