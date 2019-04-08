
int main()
{       
	int x,y,t;
	scanf("%d %d",&x,&y);
	if(x==1||y==1) printf("1");
	if(x!=1&&y!=1&&x==y) printf("%d",x);
	if(x!=1&&y!=1&&x!=y){
	do{
	    if(x>y){
           t=x;
		   x=y;
		   y=t;
		}
	    y=y/2;
	}
	while(x!=y);
	printf("%d",y);
	}
	return 0;
}