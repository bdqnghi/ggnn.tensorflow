
int main(){
	int i,n,a=0,b=0,c,d;
	scanf("%d",&n);

    for(i=0;i<n;i++){
		scanf("%d%d",&c,&d);
		if(((c+1)==d)||((c-2)==d)){
			a++;
		}
         else if(((d+1)==c)||((d-2)==c)){
			b++;
		}	
	}

	if(a<b){
		printf("B");
	}else if(a==b){
		printf("Tie");
	}else{
		printf("A");
	}




		return 0;
}