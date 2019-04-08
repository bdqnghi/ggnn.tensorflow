
int main()
{
	int n ,i ,sum ;
	scanf("%d",&n);
	sum = 0 ;
	if (n<70){
		for (i=1 ; i<=n;i++){
			if (((i-7)%10!=0)&&((i%7)!=0)){
				sum += i*i;
			}
			
		}
	}
	else if ((n>=70)&&(n<80)){
		int m = 69;
		for (i=1 ; i<=m;i++){
			if (((i-7)%10!=0)&&((i%7)!=0)){
				sum += i*i;
			}
			
		}
	}
	else if (n>=80){
		//printf("n=%d\n",n);
		int m = 69;
		for (i=1; i<=m;i++){
			if (((i-7)%10!=0)&&((i%7)!=0)){
				//printf("69for i=%d\n",i);
				sum += i*i;
			}
			
		}
		for (i=80;i<=n ;i++){
			if (((i-7)%10!=0)&&((i%7)!=0)){
				//printf("80for i=%d\n",i);
				sum += i*i;
			}
		}
		/*
		for (i=80;i<=n ;i++){
		if (((n-7)%10!=0)&&(((i-70)>9)||((i-70)<0))){
		sum += i*i ;
		}
	}*/
	}
	
	
	printf("%d",sum);
	return 0;
}

