int main()
{
	long int x[4];
    int i,t;
	for(i=0;i<4;i++)
	{
		scanf("%ld",&x[i]);
	    while (x[i]>0)

		{
		t=x[i]%10;
		printf("%d",t);
		x[i]=(x[i]-t)/10;
		}
	    printf("\n");
	}
		return 0;
}