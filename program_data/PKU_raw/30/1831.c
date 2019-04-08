int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
         for(i=0;i<=n;i++){
              sum=sum+i*i;
         }  
	for(i=0;i<=n;i++){
		if(i%7==0)
			sum=sum-i*i;
		    
                      
		else if(i%10==7)
			sum=sum-i*i;
		    
                      
        else if((i-(i%10))==70)
		    sum=sum-i*i;
	}
	printf("%d",sum);
	return 0;
}