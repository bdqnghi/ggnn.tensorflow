 
int judge(int i)
{
	int j,k1=0;
	for(j=2;j<=sqrt(i);)
	{
		if(i%j!=0)j++;
		else break;
	}
	if(j>sqrt(i)) k1=1;
	return(k1);
}

void main()
{
	int n,k1,k2,sum=0;
	scanf("%d",&n);
	int i;
	for(i=2;i<=n-2;i++)
	{
		k1=judge(i);
	    k2=judge(i+2);
		if(k1==1&&k2==1) {printf("%d %d\n",i,i+2);sum++;}
	}
	if(sum==0) printf("empty\n");
}


