int main(){
	int n,a=0,b=0,c,d,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&c,&d);
		if(c==d)
			continue;
		else if(c==0&&d==2)
			b++;
		else if(c==2&&d==0)
			a++;
		else if(c-d<0)
			a++;
		else if(c-d>0)
			b++;
	}
	if(a>b)
		printf("A");
	if(a==b)
		printf("Tie");
	if(a<b)
		printf("B");
	return 0;
}