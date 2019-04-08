
/*????????m?????*/
int f(int m)
{
	int t,k;
	k=sqrt(m);
	for(t=2;t<=k;t++)
		if(m%t==0) break;
	if(t>k) return 1;
	else return 0;
}

int main(void)
{
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=3;i<n-1;i=i+2)
	{
		if(f(i)==1)
		{
			j=i+2;
			if(f(j)==1) {printf("%d %d\n",i,j);k++;}
		}
	}
	if(k==0) printf("empty");/*??k=0????????????*/
}
