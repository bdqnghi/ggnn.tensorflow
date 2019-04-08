
int main()
{
	int *x, y;
	int i;
	x=malloc(4*sizeof(int));
	for(i=0; i<4; i++)
	{
		scanf("%d", x+i);
	}
	for(i=0; i<4; i++)
	{
		y=*(x+i);
		while(y!=0)
	{
		printf("%d", y % 10);
		y = y / 10;
	}
		printf("\n");
	}
	
	return 0;
}
