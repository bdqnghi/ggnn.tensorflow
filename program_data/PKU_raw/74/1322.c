
int hui(int n)
{
	int i=0,N=n;
	for(;n!=0;)
	{
		i=i*10+n%10;
		n=n/10;
	}

if(N==i)return 1;
	else return 0;
}
int su(int n)
{
	if(n==1) return 0;
	else if(n==2) return 1;
	else if(n%2==0) return 0;
	else 
	{
		int i,flag=1;
		for(i=3;i<n;i++)
			if(n%i==0) {flag=0;break;}
		if(flag==1) return 1;
		if(flag==0) return 0;
	}
}

void main()
{
	int min,max,i,k[1000]={0},j=0;
	scanf("%d %d",&min,&max);
	for(i=min;i<=max;i++)
		if(hui(i)==1&&su(i)==1) {k[j]=i;j++;}
		if(j!=0){
	for(i=0;i<j-1;i++)
	{
        printf("%d,",k[i]);
	}
	printf("%d\n",k[j-1]);}
		else printf("no\n");
}
