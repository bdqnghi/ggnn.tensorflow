int main()
{
	int qiuyu(int n,int k,int m);
	int n,k,i,m;
	scanf("%d%d",&n,&k);
	for(m=1;;m++){
		i=qiuyu(n,k,m);
		if(i==n){
			printf("%d\n",m);
			break;
		}
	}
}
int qiuyu(int n,int k,int m)
{
	int i,l;
	l=m;
	for(i=0;i<n;i++){
		if((l%n==k)&&(l/n>0))
			l=l-k-(l-k)/n;
		else
			break;
	}
	return(i);
}