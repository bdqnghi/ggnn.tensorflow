// ????.cpp : Defines the entry point for the console application.
//

int main(){ 
    int n,q=1,k;
	int sz[20000],jieguo[20000];
    scanf("%d",&n); 
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	jieguo[0]=sz[0];
	for(int i=1;i<=n;i++){
		k=0;
		for(int j=0;j<q;j++){
			if(jieguo[j]==sz[i]){
				break;
			}else{
				k+=1;
			}
		}
		if(k==q){
			jieguo[q]=sz[i];
			q+=1;
		}
	}
	for(int i=0;i<q-1;i++){
		if(i!=q-2){
			printf("%d ",jieguo[i]);
		}else{
			printf("%d",jieguo[i]);
		}
	}



        return 0; 
      
} 

