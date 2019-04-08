int main(int argc, char* argv[])
{
	int points[100][100];
	int n,row,col;
	int sum=0,i=0;
	int SUM=0,j=0;
	scanf("%d",&n);
	for(row=0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			scanf("%d",&points[row][col]);
		}
	}
	for(row=0;row<n;row++)
	{
		sum=0;
		for(col=0;col<n;col++)
		{
			sum+=points[row][col];
		}
		if(sum<n*255)
			i++;
	}
    for(col=0;col<n;col++)
	{
		SUM=0;
        for(row=0;row<n;row++)
		{
            SUM+=points[row][col];
		}
	    if(SUM<n*255)
			j++;
	}
	printf("%d",(i-2)*(j-2));
	return 0;
}