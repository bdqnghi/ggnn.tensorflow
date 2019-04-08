int main()
{
	int a,b,i,t;
	scanf("%d%d",&a,&b);
	if(a==b)printf("%d",a);
	else {
		if(a<b){
			t=a;
			a=b;
			b=t;
		}
		while(a/2!=b){
			a=a/2;
			if(a/2<b){
				t=a;
				a=b;
				b=t;
		}
		}
	printf("%d",b);
	}
}