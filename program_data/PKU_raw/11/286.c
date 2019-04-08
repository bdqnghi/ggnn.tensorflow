
int main()
{
	int rn[11] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	int pn[11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	
	int y, m, d, dday;
	int i, j;

	int *x;
	int n = 5;
	x = malloc(15*sizeof(int));

	for(i=0; i<n; i++)
	{
		scanf("%d %d %d", x+i*3, x+i*3+1, x+i*3+2);
	}


	for(i=0; i<n; i++)
	{
		dday = 0;
		y = *(x+i*3);
		m = *(x+i*3+1);
		d = *(x+i*3+2);
		if(y %4  ==0  && y % 100 !=0 || y % 400 ==0)
		{
			for(j = 0; j< m-1; j++)
				dday = dday + rn[j];
		}
		else
		{
			for(j = 0; j< m-1; j++)
				dday = dday + pn[j];
		}
		dday = dday + d;
		printf("%d\n", dday);
	}

	return 0;
}
