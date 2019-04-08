int main()
{
	int n,i,max=0,secondmax=0;
	scanf("%d",&n);
	int num[100]={0};
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		if(max<num[i])
			max=num[i];
	}
	for(i=0;i<n;i++){
		if(secondmax>=num[i])
			secondmax=secondmax;
		else if(num[i]==max)
	        secondmax=secondmax;
		else
			secondmax=num[i];
	}
	printf("%d\n%d\n",max,secondmax);
	return 0;
}

