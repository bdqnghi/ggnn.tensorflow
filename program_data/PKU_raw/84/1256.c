int main(){
	int n,i,a,b,c;
	i=1;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&a);
		if(i==1){
			b=a;
			a=0;
		}else{
			if(a>b){
				c=b;
				b=a;
			}else{
				b=b;
				if(a>=c){
					c=a;
				}else{
					c=c;
				}
			}
		}
		i++;
	}
	printf("%d\n%d\n",b,c);
	return 0;
}
