
int main()
{
	int n=0;
	scanf("%d",&n);
	int i=1;
	int x=0,y=0;

	for(i=1;i<=n;i++){
		int t;
		scanf("%d",&t);
		if(i==1){
			x=t;
		}
		else if(i==2){
			y=t;
		}
	
		if(x<y){
			int z=x;
			x=y;
			y=z;
		}

		if(t>x){
			y=x;
			x=t;
		}
		else if (t<x&&t>y){
		y=t;

		}

	}
	printf("%d\n%d\n",x,y);
	
	
	return 0;
}