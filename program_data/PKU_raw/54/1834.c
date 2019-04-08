int N;
int K;
int Sum;

//whether it can satisfy the nth monkey's operation//
int Monkey(int n)
{
	if(n==0)
		return 1;
	else{
		if(Sum%(N-1)==0){
			Sum=Sum/(N-1)*N+K;
			return 1&&Monkey(n-1);
		}
		else
			return 0;
	}
}

void main()
{
	int m;
	scanf("%d%d",&N,&K);
	for(m=N-1;;m+=N-1){
		Sum=m;
		if(Monkey(N))
			break;
	}
	printf("%d\n",Sum
		);
}