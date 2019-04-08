int main()
{
	int n, i, x[5]={3,5,7,1000,1000};
	scanf("%d",&n);
	for(i=0; i<3; i++)
	{
		if(n%x[i]==0&&n%x[i+1]!=0&&n%x[i+2]!=0)
			printf("%d" ,x[i]);
		else if(n%x[i]==0&&(n%x[i+1]==0||n%x[i+2]==0))
			printf("%d ", x[i]);
	}
	if(n%3!=0&&n%5!=0&&n%7!=0)
		printf("n");
	return 0;
}
