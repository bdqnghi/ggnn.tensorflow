int main()
{
	int n;
	scanf("%d",&n);
	if (n>=0,n<10)
		printf("%d\n",n);
	else 
		if (n>=10,n<100)
		printf("%d%d\n",n%10,n/10);
	    else 
			if (n>=100,n<1000)
				printf("%d%d%d\n",n%10,n%100/10,n/100);
	        else 
		        if (n>=1000,n<10000)
		        printf("%d%d%d%d\n",n%10,n%100/10,n/100%10,n/1000);
	        else printf("00001\n");
	return 0;
}
		
		