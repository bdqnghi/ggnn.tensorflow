int main(){
	int i,m,c[20],d[20],a,b,e,f;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&c[i]);
	}
	for(i=0;i<m;i++){
		a=1;b=1;
		if(c[i]==1||c[i]==2){
		   d[i]=1;
		}
		else if(c[i]==3){
			d[i]=2;
		}
		else{
			for(int k=3;k<c[i];k++){
		        
				f=b;
				b=a+b;
				a=f;
				d[i]=a+b;
			}
		}
	}
	for(i=0;i<m;i++){
		printf("%d\n",d[i]);
	}
	return 0;
}
			                                                                                                  
				
				
