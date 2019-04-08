int main()
{
	char c[500][100];
	int d[500];
	int i=0;
	int a,sum,num,w;
	scanf("%d",&a);
	do
	{
		scanf("%s",c[i]);
		i++;
	}while(i<a);
	i=0;
	do
	{
		d[i]=strlen(c[i]);
		i++;}
	while(i<a);
	i=0;
	printf("%s",c[0]);
	do
	{   
		sum=0;
		num=0;
		if(w==1)
		{printf("%s",c[i]);
		sum+=d[i];i++;num++;}
		w=0;
		do
		{
		if(i==0)
		{sum+=d[i];i++;num++;}
		sum+=d[i];
		printf(" %s",c[i]);
		i++;
		if(i==a)
		{break;}
		num++;
		}while(sum+d[i]+num<=80);
		printf("\n");w++;
	}while(i<a);
	return 0;
}

