int main()
{
	int a, b=-1,c=-2;
	scanf("%d",&a);
	int d;
	for(int i=0;i<a;i++){
		scanf("%d",&d);
		if(d>b){
			c = b;
			b = d;
		}
		else if(d<b && d>c){
			c = d;
		}
	}
    printf("%d\n%d",b,c);
	return 0;
}