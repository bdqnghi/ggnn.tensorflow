int main(){
	int i,a,b,c=0,d=0,e=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(a==b){
			e++;
		}
		else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
			c++;
		else
			d++;
	}
	if(c>d)
		printf("A");
	if(d>c)
		printf("B");
	if(c==d)
		printf("Tie");
	return 0;
	
}