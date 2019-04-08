// &frac34;&Oslash;&Otilde;ó&frac12;&raquo;&raquo;&raquo;&ETH;&ETH;&micro;&Uacute;&para;&thorn;&micro;&macr;.cpp : Defines the entry point for the console application.
//


int main(int argc, char* argv[])
{
	int sz[5][5],m,n,i,j,e;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d%d",&m,&n);
	if(m>=0&&m<=4&&n>=0&&n<=4){
		for(i=0;i<5;i++){
			e=sz[m][i];
			sz[m][i]=sz[n][i];
			sz[n][i]=e;
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j==0)printf("%d",sz[i][j]);
				else if(j==4)printf(" %d\n",sz[i][j]);
				else printf(" %d",sz[i][j]);
			}
		}
	}else printf("error");
	return 0;
}

