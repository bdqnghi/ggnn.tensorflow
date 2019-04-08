int main (){
	int n,a,b,c,h=0,k=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		c=a-b;
		if(c==1){
			k++;
		}else if(c==2){
			h++;
		}else if(c==-1){
			h++;
		}else if(c==-2){
			k++;
		}else if(c==0){
			h++;
			k++;
		}
	}
	if(h<k){
		printf("B");
	}else if(h>k){
		printf("A");
	}else if(h==k){
		printf("Tie");
	}
	return 0;
}
