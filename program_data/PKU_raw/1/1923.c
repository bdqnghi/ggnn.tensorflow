

int digui(int m,int n,int sum)
{
	int i;
	sum++;
	if(sqrt(m)<n)
		return sum;
	else{
		for(i=n;i<=sqrt(m);i++){
			if(m%i==0)
				sum=digui(m/i,i,sum);
		}
		return sum;
	}
}

void main()
{
	int n,a;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		printf("%d\n",digui(a,2,0));
	}
}