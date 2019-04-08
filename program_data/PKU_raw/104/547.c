int main()
{
	int x[1000], y[1000], i, j, temp;
	scanf("%d%d", &x[0], &y[0]);
	if(x[0]>y[0])
	{
		temp=x[0];
		x[0]=y[0];
		y[0]=temp;
	}
	i=0;
	while(x[i]!=1)
	{
		i++;
		x[i]=x[i-1]/2;
	}
	i=0; j=0;
	while(y[j]!=x[i])
	{
       j++;
	   y[j]=y[j-1]/2;
	   if(y[j]<x[i]) i++;
	}
	printf("%d\n", x[i]);
	return 0;
}