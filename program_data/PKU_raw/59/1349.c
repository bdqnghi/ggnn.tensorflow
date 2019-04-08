int main()
{
    int i,j,k,n,count,time;
	// ?????
    char a[2][100][101]; //????'\0'???????
    scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		gets(a[0][i]);
		strcpy(a[1][i],a[0][i]);
	}
	scanf("%d",&time);
	for(k=0;k<(time-1);k++){ //???????time?1
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(a[0][i][j]=='@'){
					if(i+1<n){ //???????????????
						if(a[0][i+1][j]=='.'){
							a[1][i+1][j]='@';  //????????????????
						}
					}
					if(i-1>=0){ 
						if(a[0][i-1][j]=='.'){
							a[1][i-1][j]='@';
						}
					}
					if(j+1<n){ 
						if(a[0][i][j+1]=='.'){
							a[1][i][j+1]='@';
						}
					}
					if(j-1>=0){ 
						if(a[k%2][i][j-1]=='.'){
							a[1][i][j-1]='@';
						}
					}
				}
			}
		}
		for(i=0;i<n;i++){
			strcpy(a[0][i],a[1][i]);   //?????????????????
		}
	}
	// ?????????????????
	count=0;
	for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(a[0][i][j]=='@'){
					count++;
				}
			}
	}
	printf("%d",count);
    return 0;
}