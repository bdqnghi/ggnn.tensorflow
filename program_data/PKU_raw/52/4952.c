
int main()
{
    
	int a,c,b,d,n,m,i,x[1000],y[1000];
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		scanf("%d",&x[i]);
		}
	for(i=1;i<=n-m;i++){
		y[i+m]=x[i];
	}
	
	for(i=n-m+1;i<=n;i++){
		y[i-n+m]=x[i];
	}
	for(i=1;i<=n;i++){
		if(i==1)printf("%d",y[i]);
		else printf(" %d",y[i]);
		}
		


}
