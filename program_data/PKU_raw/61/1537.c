int F(int a);
int main()
{
	int n,a,i,sz[20],result;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		
		result=F(a);
		printf("%d\n",result);
	}
	return 0;
}
int F(int a){
	int result,i,st[20];
	st[0]=0;
	st[1]=1;
	for(i=2;i<=a;i++){
		st[i]=st[i-1]+st[i-2];
	}
	result=st[a];
	return result;
}