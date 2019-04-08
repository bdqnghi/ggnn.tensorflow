int main(){
	int n;
	int i,j;
	int x1,y1,x2,y2;
	int s=0;
	int a,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&t);
			if(t==0){
				if(s==0){
					x1=i;
				    y1=j;
				    s=1;
				}
				x2=i;
				y2=j;
			}
		}
	}
	a=(x2-x1-1)*(y2-y1-1);
	if(a<0)
		a=-a;
	printf("%d",a);
	return 0;
}