void main()
{
	char a[300][100]={0};
	int i,k,j;
          k=0;
	for(i=0;i<=300;i++)
	{
	scanf("%s",a[i]);
         if(strlen(a[i])!=0)k=k+1;
	}
	
	if(k>1)
	{
		printf("%d",strlen(a[0]));
		for(i=1;i<k;i++)
			printf(",%d",strlen(a[i]));
	}
	if(k==1)
	{
		printf("%d",strlen(a[0]));
	}
}