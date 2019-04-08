
int count(int a,int b);
int main(){
	int k,n;
	scanf("%d %d",&n,&k);
	printf("%d",count(n,k));
	return 0;
}
int count(int a,int b){
	int n,k,i,c,d;
	n=a,k=b,c=1;
	for (i=0;i<n-1;i++)
	{
		if (i==0)
		{
			d=(c*a+k);
		}else{
			d=a;
		}
		if (d%(n-1) != 0)
		{
			c++;
			i=-1;
			a=n;
		} 
		else
		{
			a=d/(n-1)*n+k;

		}
	}
	return a;
}