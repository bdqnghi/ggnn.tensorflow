int main(){
	int n,a,b,i,c,d;
	a=0;
	b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&c,&d);
		if(c==0&&d==1)
			a++;
		else if(c==1&&d==2)
			a++;
		else if(c==2&&d==0)
			a++;
		else if(c==1&&d==0)
			b++;
		else if(c==2&&d==1)
			b++;
		else if(c==0&&d==2)
			b++;
	}
	if(a>b)
		printf("A");
	else if(b>a)
		printf("B");
	else 
		printf("Tie");


	return 0;
}