int main(){
	int n,a,b,c=0,d=0;
	scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
		scanf("%d%d",&a,&b);
		if(a-b==1){d=d+1;}else if(a-b==-1){
				c=c+1;}else if(a-b==-2){
					d=d+1;}else if(a-b==2){
						c=c+1;}else if(a=b){
							c=c;d=d;}}
if(c>d){printf("A");}else if(c==d){
		printf("Tie");}else if(c<d){printf("B");}
		return 0;

}
