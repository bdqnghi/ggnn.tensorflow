int main()
{

	int n,a,i;
	a=0;
	i=0;
	scanf("%d",&n);

	while(i<n){
		i++;
		
		if((i%7==0)||(i/10==7)||(i-(i/10)*10==7))
		continue;
            a+=i*i;
		
	}
	

	printf("%d",a);
	return 0;
}