int main()
{
	int array[100][100];
	int x,y,i,k,n;
	i=0;
	k=0;
	scanf("%d%d",&x,&y);
	for(k=0;k<=x-1;k++){
		for(i=0;i<=y-1;i++){
			scanf("%d",&(array[k][i]));
		}
	}
	if(x>=y){
		n=(y-1)/2;
	}else{
		n=(x-1)/2;
	}
	for(i=0;i<=n;i++){
		for(k=i;k<=y-i-1;k++){
			printf("%d\n",array[i][k]);
		}
		for(k=i+1;k<=x-i-1;k++){
			printf("%d\n",array[k][y-i-1]);
		}
		if(n>0&&i<=(x-2)/2){
			for(k=y-i-2;k>=i;k--){
				printf("%d\n",array[x-i-1][k]);
			}
		}else{
			break;
		}
		if(n>0&&i<=(y-2)/2){
			for(k=x-i-2;k>=i+1;k--){
				printf("%d\n",array[k][i]);
			}
		}else{
			break;
		}
	}
	return 0;
}