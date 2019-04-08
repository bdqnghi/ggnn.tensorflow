int main()
{
   int n,a,b,c,d,i;
	scanf("%d\n%d\n%d\n",&n,&a,&b);
	if(a<b){
		c=a;
		b=a;
		a=c;
	}
	for(i=3;i<n;i++){
		scanf("%d\n",&d);
		if(d>=a){
			b=a;
			a=d;
		}
		else if(d>=b){
			b=d;
		}
	}
scanf("%d",&d);
		if(d>=a){
			b=a;
			a=d;
		}
		else if(d>=b){
			b=d;
		}
	printf("%d\n%d\n",a,b);
   return 0;
}