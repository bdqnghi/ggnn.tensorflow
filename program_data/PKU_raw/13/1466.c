int main(){
	int n,input[20000],output[20000],i,j,k,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&input[i]);
	}
	k=0;
	for(i=0;i<n;i++){
		x=0;
		for(j=0;j<i;j++){
			if(input[i]==input[j]){
				x++;
                                    break;
                  }
		}
		if(x==0){
			k++;
			output[k]=input[i];
		}
	}
	for(i=1;i<k;i++){
		printf("%d ",output[i]);
	}
	if(i==k)
		printf("%d\n",output[i]);
return 0; 
}