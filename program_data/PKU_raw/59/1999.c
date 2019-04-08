
int main()

{

	char sz[110][110];

	int n,row,col;

	scanf("%d",&n);

	char s0[110];

	for(row=0;row<n;row++){

		scanf("%s",s0);

		for(col=0;col<n;col++){

			//scanf("%",&sz[row][col]);

			sz[row][col]=s0[col];

			//if(sz[row][col]=='\n') col=col-1;

		}

	}

	for(row=0;row<n;row++){

		for(col=0;col<n;col++){

			if(sz[row][col]=='.') sz[row][col]=1;

			if(sz[row][col]=='@') sz[row][col]=2;

			if(sz[row][col]=='#') sz[row][col]=3;

		}

	}

	int m,i;

	char szz[110][110];

	scanf("%d",&m);

	for(i=0;i<m-1;i++){

		for(row=0;row<n;row++){

			for(col=0;col<n;col++){

				if(sz[row][col]==2){

					if(sz[row-1][col]==1) szz[row-1][col]=2;

					if(sz[row+1][col]==1) szz[row+1][col]=2;

					if(sz[row][col+1]==1) szz[row][col+1]=2;

					if(sz[row][col-1]==1) szz[row][col-1]=2;

				}

			}

		}

		for(row=0;row<n;row++){

			for(col=0;col<n;col++){

				if(szz[row][col]==2) sz[row][col]=2;

			}

		}

	}

	int s=0;

	for(row=0;row<n;row++){

		for(col=0;col<n;col++){

			if(sz[row][col]==2) s=s++;

		}

	}

	printf("%d",s);

	return 0;

}