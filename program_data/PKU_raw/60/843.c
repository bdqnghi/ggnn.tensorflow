int main(){
	int i,j,n,x=0,y=0,z=0;
	scanf("%d",&n);
	if(n==1||n==2||n==3||n==4){
		printf("empty");
	}
	if(n>4){
	    for(i=3;i<=n-2;i++){
			x=0;
		    for(j=i;j>0;j--){
			    if(i%j==0){
				    x+=1;
				}
			}
		if(x==2){
			y=0;
			for(j=i+2;j>0;j--){
				if((i+2)%j==0){
				    y+=1;
				}
			}
		    if(y==2){
				printf("%d %d\n",i,i+2);
			}
		
		}
		}
	}
	return 0;
}