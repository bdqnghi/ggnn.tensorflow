int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	while(x>=1&&y>=1){
		 if (x==y) 
		 {printf("%d",x);
          break;
		 }
		 if(x<y) {
			 while(x<y){
             y=y/2;
			 }
		 }
		 else {
			 while(x>y){
             x=x/2;
			 }
		 }
	}
    return 0;
}