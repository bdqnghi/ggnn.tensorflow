int main(){
int a[200][200];
int i,j,u,t=0;
int row,col;
scanf("%d %d",&row,&col);
for(i=0;i<row;i++){
	for(j=0;j<col;j++){
		scanf("%d",&a[i][j]);
	}
	
}
for(j=0;j<col;j++){
	for(u=0;;u++){
		if(u>=row||j-u<0) break;
		printf("%d\n",a[u][j-u]);
		}
	}

for(j=1;j<row;j++){
	for(u=1;;u++){
		if(u+j-1>=row||col-u<0) break;
	
			printf("%d\n",a[u+j-1][col-u]);
	
	}
}
return 0;
}
	

