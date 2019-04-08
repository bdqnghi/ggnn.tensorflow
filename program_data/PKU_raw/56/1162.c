int main()
{
	int n, a[5], i, m, b;
	scanf("%d", &n);
    for(i=0;i<5;i++)
	{
		a[i]=n%10;
		printf("%d", a[i]);
		b=(int)n/10;
		n=b;
		if(n==0)
		{
	    	break;
		}
	}
	return 0;
}



