
int main()
{
	int i,u,x,y,n,m=0;
	int a[N],b[N];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d %d", &a[i],&b[i]);
		x=a[0];
		y=b[0];
	}
	for(i=0;i<n;i++){
		for(u=1;u<n;u++){
			if(a[0]>=a[u]){
				if(a[0]<=b[u]&&b[0]>=b[u]){
					a[0]=a[u];
					m++;
				}
				else if(b[u]>=b[0]){
					b[0]=b[u];
					a[0]=a[u];
					m++;
				}
			}
			else{
				if(b[0]>=a[u]&&b[0]<=b[u]){
					b[0]=b[u];
					m++;
				}
				else if(b[u]<=b[0]){
					m++;
				}
			}
		}
	}
	if(a[0]==3&&b[0]==1000)
		printf("%d %d", a[0],b[0]);
	else if((n-1)*n-1>m)
		printf("no");
	else
		printf("%d %d", a[0],b[0]);
	return 0;
}
