int kong(int m,int n);
int zong(int m,int n);
int have(int m,int n);
int main()
{
	int a,b,t,i,c[50];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		c[i]=zong(a,b);
	}
	for(i=0;i<t;i++){
		printf("%d\n",c[i]);
	}
	return 0;
}
int kong(int m,int n){
	if(n==1) return 0;
	else return (zong(m,n-1));
}
int zong(int m,int n){
	if(m==0) return 1;
	else if(m==1) return 1;
	else if(m>=n) return(kong(m,n)+have(m,n));
	else return(kong(m,n));
}
int have(int m,int n){
	return (zong(m-n,n));
}
