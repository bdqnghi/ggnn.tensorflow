int main(){
	int array[1000],n,k,i,j,flag=0,m;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}

	for(i=0;i<n-1;i++){
			m=i;
			for(j=i+1;j<n;j++){
				if(array[j]<array[m]){
					m=j;
				}
			}
			int temp=array[i];
			array[i]=array[m];
			array[m]=temp;
	}

	for(i=0,j=n-1;i<j;){
		int temp=array[i]+array[j];
		if(temp==k){
			flag=1;
			break;
		}else if(temp>k){
			j--;
		}else{
			i++;
		}
	}
	if(flag){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}