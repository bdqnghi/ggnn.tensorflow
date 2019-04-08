int main(){
	int n;
	int i=0;
	int count=0;
	int a[200][2];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	for(i=0;i<n;i++){
		if(a[i][0]==0&&a[i][1]==1){
			count++;
		}else if(a[i][0]==0&&a[i][1]==2){
			count--;
		}else if(a[i][0]==0&&a[i][1]==0){
			count+=0;
		}else if(a[i][0]==1&&a[i][1]==0){
			count--;
		}else if(a[i][0]==1&&a[i][1]==1){
			count+=0;
		}else if(a[i][0]==1&&a[i][1]==2){
			count++;
		}else if(a[i][0]==2&&a[i][1]==0){
			count++;
		}else if(a[i][0]==2&&a[i][1]==1){
			count--;
		}else if(a[i][0]==2&&a[i][1]==2){
			count+=0;
		}
	}
	if(count==0){
		printf("Tie\n");
	}else if(count>0){
		printf("A\n");
	}else{
		printf("B\n");
	}
	return 0;
}