int main ()
{
int m,n,i,j;
scanf("%d%d",&m,&n);
int sz[NUMBER][NUMBER];
for(i=0;i<=m+1;i++){
	for(j=0;j<=n+1;j++){
		sz[i][j]=0;
	}
}
for(i=1;i<=m;i++){
	for(j=1;j<=n;j++){
		scanf("%d",&(sz[i][j]));
	}
}
for(i=1;i<=m;i++){
	for(j=1;j<=n;j++){
		if(sz[i][j]>=sz[i][j+1]&&sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i-1][j]){
			printf("%d %d\n",i-1,j-1);
		}
	}
}
return 0;
}