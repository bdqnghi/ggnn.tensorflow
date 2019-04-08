int main()
{
	int i,j,k,count=0,row,arr[100][100],n[100],b[100];
	for(i=0;i<100;i++){
		count=0;
		for(j=0;j<100;j++){
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==0||arr[i][j]==-1){
				n[i]=count;
				break;
			}
			count++;
		}
		if(arr[i][j]==-1){
			row=i; //last row=-1, n[i]=0
			break;
		}
	}
	
	for(i=0;i<row;i++){
		count=0;
		for(j=0;j<n[i];j++){
			for(k=j+1;k<n[i];k++){
		                if(arr[i][j]==(arr[i][k]*2)||(arr[i][j]*2)==arr[i][k]){
					count++;
				}
			}
		}
		b[i]=count;
	}
	for(i=0;i<row;i++){
		printf("\n%d",b[i]);
	}
	return 0;	
}