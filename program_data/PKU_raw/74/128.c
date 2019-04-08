void main()
{	int huiwen(int a);
	int sushu(int b);
	int m,n,i,t=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
		if(huiwen(i)==1&&sushu(i)==1) {printf("%d",i);t++;break;}
	for(i=i+1;i<=n;i++)
		if(huiwen(i)==1&&sushu(i)==1) printf(",%d",i);
	if(t==0) printf("no");
	scanf("%d",&n);
}
int huiwen(int a)
{	int k,t=0,s;
    s=a;
	while(a>0)
	{	k=a%10;
		a=a/10;
		t=t*10+k;
	}
	if(s==t) return(1);
	else return(0);
}
int sushu(int b)
{	int i;
	for(i=2;i<=b;i++)
		if(b%i==0) break;
	if(b==i) return(1);
	else return(0);
}