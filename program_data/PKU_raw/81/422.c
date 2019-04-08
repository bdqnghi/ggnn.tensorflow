
int main()
{
	int str[5][5],i,j,m,n;
	int (*p)[5]=str,k;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",*(p+i)+j);
	scanf("%d %d",&m,&n);
	if(!(m>=0&&m<=4&&n>=0&&n<=4)) printf("error\n");
	else
	{
		for(i=0;i<5;i++)
	   {
		   if(i==n) k=m;
		   else if(i==m) k=n;
		   else k=i;
		   for(j=0;j<4;j++)
			   printf("%d ",*(*(p+k)+j));
		   printf("%d",*(*(p+k)+j));
		   printf("\n");

	   }
	}
	return 0;
	
}
