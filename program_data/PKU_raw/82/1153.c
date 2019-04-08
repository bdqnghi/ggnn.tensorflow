
int main(){
	int sum=0,max=0;
	int pre[101][2];
	int n,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&pre[i][0],&pre[i][1]);
	}
	for(i=0;i<n;i++){
		if((pre[i][0]>=90)&&(pre[i][0]<=140)&&(pre[i][1]>=60)&&(pre[i][1]<=90)){
			sum++;
			if(sum>max){
				max=sum;
			}
		}else{
			sum=0;
		}
	}
	printf("%d\n",max);
	return 0;
}
