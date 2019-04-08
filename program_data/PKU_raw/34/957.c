int main()
{
	int i,a;
	scanf("%d",&a);
	if (a!=1) 
		while ((a/2!=1) || (a%2!=0)) 
		if (a%2==0)
		{
			printf("%d/2=%d\n",a,a/2);
			a=a/2;
		}
        else 
		{
           printf("%d*3+1=%d\n",a,a*3+1);
		   a=a*3+1;
		}
    if (a!=1) printf("%d/2=%d\n",a,a/2);
	printf("End\n");
	return 0;
}