int main()
{
	int s[100][15],i,j,n,m,a[100],p,b[100]={0};
	for (i=0;;){
		for (j=0;;){
			scanf("%d",&s[i][j]);
			if (s[i][j]==0) {a[i]=j+1;i++;break;}
			else if (s[i][j]==-1) break;
            else j++;
		}
		if (s[i][j]==-1) break;
	}
	
	for (m=0;m<i;m++){
		for (n=0;n<a[m]-1;n++){
			for (p=0;p<a[m]-1;p++){
				if (s[m][p]==2*s[m][n])  b[m]++;	
			}
		}
	}
	
	for (m=0;m<i;m++){
		printf("%d\n",b[m]);
	}

	
}