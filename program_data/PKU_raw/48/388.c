int main()
{
	int m,n,i,j,a,b,sz[11][11],de[11][11];
	scanf("%d%d",&m,&n);
	for(i=0;i<11;i++){
		for(j=0;j<11;j++){
			sz[i][j]=0;
			de[i][j]=0;
		}
	}
	de[5][5]=m;
	for(a=0;a<n;a++){
		for(i=1;i<10;i++){
			for(j=0;j<10;j++){
				sz[i][j]=de[i][j];
			}
		}
		for(i=1;i<10;i++){
			for(j=1;j<10;j++){
				if(sz[i][j]!=0){
					b=sz[i][j];
					de[i][j+1]=de[i][j+1]+b;
					de[i][j-1]=de[i][j-1]+b;
					de[i-1][j]=de[i-1][j]+b;
					de[i+1][j]=de[i+1][j]+b;
					de[i-1][j-1]=de[i-1][j-1]+b;
					de[i-1][j+1]=de[i-1][j+1]+b;
					de[i+1][j-1]=de[i+1][j-1]+b;
					de[i+1][j+1]=de[i+1][j+1]+b;
					de[i][j]=de[i][j]+b;
					}								
			}
		}			
	}
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			if(j<9)
				printf("%d ",de[i][j]);
			else
				printf("%d\n",de[i][j]);
		}
	}
	return 0;
}
