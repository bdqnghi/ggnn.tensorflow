
int main()

{
	int x,y;
	scanf("%d %d",&x,&y);
	while(x!=y)
	{
		if(x>y && x%2==0){
			x=x/2;}
		else if(x>y && x%2!=0){
			x=(x-1)/2;}
		else if(y>x && y%2==0){
			y=y/2;}
		else if(y>x && y%2!=0){
			y=(y-1)/2;}
	}
	printf("%d",x);
	return 0;
}
 