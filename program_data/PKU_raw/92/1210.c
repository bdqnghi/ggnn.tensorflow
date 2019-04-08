
int a[1001];
int b[1001];
int f[1001][1001];

int cmp(const void *x,const void *y){
	return *((int *)y)-*((int *)x);
}
int find(int i,int j){
	if(a[i] > b[j]) return 200;
	if(a[i] == b[j]) return 0;
	return -200;
}
int maxS(int aa,int bb){
	return aa>bb?aa:bb;
}

int main(){
	int n,i,j;

	while(scanf("%d",&n) && n){

		for(i = 0;i < n;i++)
			scanf("%d",a+i);
		for(i = 0;i < n;i++)
			scanf("%d",b+i);

		qsort(a,n,sizeof(int),cmp);
		qsort(b,n,sizeof(int),cmp);

		for(i = 0;i < n;i++)
			f[i][0] = find(0,i);
		for(i = n-2;i >= 0;i--)
			for(j = 1;j < n-i;j++)
				if(b[i+j] > a[j])
					f[i][j] = f[i+1][j-1] - 200;
				else if(b[i+j] < a[j])
					f[i][j] = f[i][j-1] + 200;
				else if(f[i+1][j-1] - 200 > f[i][j-1])
					f[i][j] = f[i+1][j-1] - 200;
				else f[i][j] = f[i][j-1];

		printf("%d\n",f[0][n-1]);
	}
	return 0;
}