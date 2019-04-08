int main()
{
	int i,j,t[5],m,n;
	int sz[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
    if(m<5&&n<5&&m>-1&&n>-1)
	{
	     for(j=0;j<5;j++)
		 {
			 t[j]=sz[m][j];
			 sz[m][j]=sz[n][j];
             sz[n][j]=t[j];
		 }
	    for(i=0;i<4;i++)
		 {
		 for(j=0;j<4;j++)
		 {
			printf("%d ",sz[i][j]);
		 }
		 printf("%d\n",sz[i][4]);
		 }
for(j=0;j<4;j++)
printf("%d ",sz[4][j]);
printf("%d",sz[4][4]);
}
if(m>4||m<0||n>4||n<0)
printf("error");
return 0;
}