int main()
{
	int n,a,x,y,i,e,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		if(a==1){
			printf("1\n");
		}else if(a==2){
			printf("1\n");
		}else{
			x=1,y=1;
			for(k=3;k<=a;k++){
				e=y;
				y=x+y;
				x=e;
			}
			printf("%d\n",y);
		}
	}
	return 0;
}