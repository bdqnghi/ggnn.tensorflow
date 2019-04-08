int main()
{
	int n;
	int sum=0;
	int i=0;
    scanf("%d",&n);
	while(i<=n)
	{
		if(i%7!=0){
			if(i%10!=7){
				if(i/10!=7)
				  sum=sum+i*i;
			
			}

		}
		i++;
	}
	printf("%d\n",sum);
	return 0;
}