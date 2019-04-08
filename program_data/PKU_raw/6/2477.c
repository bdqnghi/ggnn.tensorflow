int main()
{
    int sum(int p[100][100],int m,int n);
	int N,m,n,a[100][100]={0},i,j,k,s;
	scanf("%d",&N);
	for(k=0;k<N;k++){
		scanf("%d%d",&m,&n);
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		s=sum(a,m,n);
		printf("%d\n",s);
	}
	return 0;
}
int sum(int p[100][100],int m,int n)
{
	int i,k=0;
	if(m!=1){
	    for(i=0;i<n;i++)
		    k+=*(*p+i)+*(*(p+m-1)+i);
	}
	else{
		for(i=0;i<n;i++)
			k+=*(*p+i);
	}
	if(n!=1){
	    for(i=1;i<m-1;i++)
		    k+=**(p+i)+*(*(p+i)+n-1);
	}
	else{
		for(i=1;i<m-1;i++)
			k+=**(p+i);
	}
	return k;
}