int main()
{
	int n,shu[6]={0},qian[6]={100,50,20,10,5,1},zong=0,i,j;
	scanf("%d",&n);
	for(i=0;i<6;i++){
		for(j=1;;j++){
			if(zong+qian[i]*j<=n){
				shu[i]+=1;
			}else{
				zong+=shu[i]*qian[i];
				break;
			}
		}
	}
	for(i=0;i<6;i++){
		printf("%d\n",shu[i]);
	}
	return 0;
}