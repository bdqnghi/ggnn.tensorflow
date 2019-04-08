int main(){
	int n,x,y,i,a=0,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		if((x==0&&y==1)||(x==2&&y==0)||(x==1&&y==2)){
			a++;}
		if((x==1&&y==0)||(x==0&&y==2)||(x==2&&y==1)){
			b++;}}
	if(a==b){printf("Tie");}
	if(a>b){printf("A");}
	if(a<b){printf("B");}




	
     return 0;}