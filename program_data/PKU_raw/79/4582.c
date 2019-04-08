
struct monkey
{
	int num;
	int nextmonk;
};


void countoff(int n,int m)
{
	struct monkey *monk
		=(struct monkey *) malloc(LEN*n);
	int i,j,sum=n,last;

	for(i=1;i<=n;i++){
		monk[i].num=i;
		monk[i].nextmonk=i+1;
	}
	monk[n].nextmonk=1;
	last=i=n;

	while(sum>1){
		j=0;
		while(j!=m){
			i=monk[i].nextmonk;
			if(monk[i].num){
				j++;
				if(j!=m) last=monk[i].num;
			}
		}
		monk[i].num=0;
		sum--;
	}
	printf("%d\n",last);
}



void main()
{
	int n,m;
	while(1){
		scanf("%d %d",&n,&m);
		if(m==0&&n==0) break;
		countoff(n,m);
	}
}
