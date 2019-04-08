int exchange(int (*)[5],int,int);
//---------------------------------------------------------------------
int main()
{
	int matrix[5][5];
	int m,n;
	int i;
	for(i=0;i<25;i++)
		scanf("%d",matrix[0]+i);
	scanf("%d%d",&m,&n);
	if(exchange(matrix,m,n))
		for(i=0;i<25;i++)
			printf("%d%c",*(matrix[0]+i),(i+1)%5?' ':'\n');
	else
		printf("error");
	return 0;
}
//---------------------------------------------------------------------
int exchange(int (*matrix)[5],int m,int n)
{
	if(m>=0&&m<5&&n>=0&&n<5)
	{
		int temp,i;
		for(i=0;i<5;i++)
		{
			temp=matrix[m][i];
			matrix[m][i]=matrix[n][i];
			matrix[n][i]=temp;
		}
		return 1;
	}
	else
		return 0;
}
//=====================================================================

