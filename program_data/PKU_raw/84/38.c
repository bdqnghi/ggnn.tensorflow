int main(){
	int n;
	scanf("%d",&n);
	int c[100];
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	int j=2;
	int x=0;//zuida
	int y=0;//cida
	 if(c[0]>c[1]){
		x=c[0];//122
		y=c[1];//57
		}
	if(c[0]<c[1]){
		x=c[1];
		y=c[0];
	}
  
	for(j=0;j<n;j++){
		if(c[j]>x){
			y=x;
			x=c[j];
			
		}
		if(c[j]>y && c[j]<x){
			y=c[j];
		}
	}
	
	printf("%d\n%d\n", x,y);
	return 0;
}



 
