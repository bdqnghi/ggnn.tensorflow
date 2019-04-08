
int main(int argc, char* argv[])
{
	int s[100][15],t[15];
	int sum[100];
	int i,j,n,m,k;
 	for(i=0;;i++){
		for(j=0;;j++){
			scanf("%d",&s[i][j]);
			if(s[i][j]==0){
				t[i]=j;
				break;
			}
			else if(s[i][0]==-1) break;
		}
		if(s[i][0]==-1) break;
	}
	for(n=0;n<i;n++){
		sum[n]=0;
		for(m=0;m<t[n]-1;m++){
			for(k=m+1;k<t[n];k++){
				if(s[n][m]==2*s[n][k]||s[n][k]==2*s[n][m]){
					sum[n]++;
					
				}
			}
		}
	}
	for(n=0;n<i;n++){
		printf("%d\n",sum[n]);
	}
	return 0;
}
	

