int main(){
	int a,b,c,mid,i,n,high,low,stop;
	a=0;
	b=0;
	c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&high,&low);
		if((high>=90)&&(high<=140)&&(low<=90)&&(low>=60)){
			a++;
			c=a;
		}else{
			//if(n==1){
		//		printf("0");
		//	}
			if(a>0){
				mid=b;
				if(a>mid){
					b=a;
				}				
				a=0;
			}
		}
	}
	if(c<b){
		printf("%d",b);
	}else{
		printf("%d",c);
	}
	return 0;
}