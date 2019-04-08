int main()
{
	int a[500][15];
	int i,j,t,number;
	for(i=0;;i++){
		number=0;
		scanf("%d",&a[i][0]);
		if(a[i][0]==-1){
			break;
		}
		for(j=1;;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==0){
				printf("%d\n",number);
				break;
			}
			for(t=0;t<j;t++){
				if(a[i][j]*2==a[i][t]){
					number++;
					break;
				}
				if(a[i][j]==a[i][t]*2){
					number++;
				}
			}
		}
	}
	return 0;
}