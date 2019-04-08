
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int a[100][100];
	int x,y,r1,s1,r2,s2,N;
	for (x=0;x<=n-1;x++){
		for(y=0;y<=n-1;y++){
			scanf("%d",&a[x][y]);
			if (a[x][y]==0){
				r2=x;
				s2=y;
			}
		}
	}
	for (x=n-1;x>=0;x--){
		for(y=n-1;y>=0;y--){
			if (a[x][y]==0){
				r1=x;
				s1=y;
			}
		}
	}
	N=(r2-r1+1)*(s2-s1+1)-(r2-r1+s2-s1)*2;
	printf("%d\n",N);
	return 0;
}
