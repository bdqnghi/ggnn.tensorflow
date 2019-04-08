 
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int i,j;
	int c[100][100];
	int a1,a2,b1,b2,a,b,s;
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&c[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(c[i][j]==0){
				a1=i;
				b1=j;
			}
		}
	}				
	for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(c[i][j]==0){
             a2=i;
	         b2=j;
			}
		}
	}
	a=a1-a2-1;
	b=b1-b2-1;
	s=a*b;
	printf("%d",s);
	return 0;
}