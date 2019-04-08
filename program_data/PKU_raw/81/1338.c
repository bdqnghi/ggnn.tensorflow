
int exchange(int shz[5][5],int x,int y)
{
	int p,t;
	if((x>=0&&x<5)&&(y>=0&&y<5)){
	    for(p=0;p<5;p++){
		t=shz[x][p];
		shz[x][p]=shz[y][p];
		shz[y][p]=t;
	    }
	    return 1;
	}else{		
	    return 0;
	}
}

void main()
{
	int n,m;
	int result;	
	int i,j;
	int sz[5][5];
	for(i=0;i<5;i++){
	    for(j=0;j<5;j++){
		scanf("%d",&sz[i][j]);
	    }
	}
	scanf("%d%d",&n,&m);
	result=exchange(sz,n,m);                      
	if(result==0){
	    printf("error\n");
	}else{
	    for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("%d ",sz[i][j]);
			if(j==3){
			printf("%d\n",sz[i][4]);
			}
		}
	    }
	}
}