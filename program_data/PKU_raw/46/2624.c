
int main(){
	int row,col,i,j,d=1,count=0,f[110][110],vis[110][110];
	memset(vis,0,sizeof(vis));
	scanf("%d%d",&row,&col);
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			scanf("%d",&f[i][j]);
		}
	}
	/*for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("f=%d\n",f[i][j]);
		}
	}*/
	i=1;j=1;
	for(;;){
		printf("%d\n",f[i][j]);
		count++;
		if(count>=row*col)break;
		vis[i][j]=1;
		if(d==1){
			if((j+1>col)||vis[i][j+1]){
				d=2;i++;
				continue;
			}
			else{j++;}
		}
		if(d==2){
			if((i+1>row)||vis[i+1][j]){
				d=3;j--;
				continue;
			}
			else{i++;}
		}
		if(d==3){
			if((j<2)||vis[i][j-1]){
				d=4;i--;
				continue;
			}
			else{j--;}
		}
		if(d==4){
			if((i<1)||vis[i-1][j]){
				d=1;j++;
				continue;
			}
			else{i--;}                 
		}
		
	}
	scanf("%d",&i);

	return 0;
}