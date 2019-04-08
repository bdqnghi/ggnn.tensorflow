void main()
{
	int sushu(int x);
	int n,i,t,k,j=0;
	scanf("%d",&n);
	for(i=2;i<n-1;i++){
		t=sushu(i);
		k=sushu(i+2);
		if(t==1&&k==1)
		{printf("\n%d %d",i,i+2);j++;}
	}
	if(j==0)printf("empty");
}

int sushu(int x)
{
	int i,q=1;
	float p;
	p=sqrt(x);
	for(i=2;i<=p;i++){
	if(x%i==0){q=0;break;}
	}
	return(q);
}