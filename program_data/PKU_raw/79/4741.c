int main(){
	int i,j,row=0,count=0,check,zeronum,n[100],m[300],arr[300];
	for(i=0;i<300;i++){
		scanf("%d%d",&n[i],&m[i]);
		if(n[i]==0||m[i]==0){
			break;
		}
		row++;
	}
	for(i=0;i<row;i++){
		for(j=0;j<n[i];j++){
			arr[j]=j+1;
		}
		count=0;
		check=100;
		zeronum=0;
		while(check!=0){
			for(j=0;j<n[i];j++){
				if(arr[j]!=0){
					count++;
					if(count==m[i]){
						count=0;
						arr[j]=0;
						zeronum++;
					}
					if(zeronum==n[i]-1){
						check=0;
						break;
					}
				}
			}
		}

		for(j=0;j<n[i];j++){
			if(arr[j]!=0){
				printf("%d\n",arr[j]);
			}
		}
	}
	return 0;
}

