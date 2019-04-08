//??????????????????
int main()
{
	int panduan(int sz[][5],int n,int m);
	int sz[5][5],n,m,i,k;
	for(i=0;i<5;i++){                          /*?????????*/
		for(k=0;k<5;k++)
			scanf("%d",&sz[i][k]);
	}
	scanf("%d%d",&n,&m);
	if(panduan(sz,n,m)){                       /*????????????*/
		for(i=0;i<5;i++){
			for(k=0;k<4;k++)
				printf("%d ",sz[i][k]);
			printf("%d\n",sz[i][4]);
		}
	}
	else
		printf("error");
	return 0;
}
//??????????????????
int panduan(int sz[][5],int n,int m)
{
	int result,zhong[5],i;
	if((n<5&&n>=0)&&(m<5&&m>=0)){
		for(i=0;i<5;i++){                 /*?????n?m??????*/
			zhong[i]=sz[m][i];
			sz[m][i]=sz[n][i];
			sz[n][i]=zhong[i];
		}
		result=1;
	}
	else
		result=0;
	return result;
}