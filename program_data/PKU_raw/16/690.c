int main()
{
	int n,i,j,k;
		scanf("%d",&n);
	    i=(n%10)*10+(n-n%10)/10;
		j=(n%10)*100+(n%100-n%10)+(n-n%100)/100;
		k=(n%10)*1000+(n%100-n%10)*10+(n%1000-n%100)/10+(n-n%1000)/1000;
		if(n%10==n)
			printf("%d",n);
		else if(n%100==n)
			printf("%02d",i);
		else if(n%1000==n)
			printf("%03d",j);
		else 
			printf("%04d",k);
		return 0;
}
