
int main(int argc, char* argv[])
{
	int dian[10][10];
	int i,j,s,n,a,b,c,d;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			scanf("%d",&dian[j][i]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(dian[i][j]==0&&dian[i+1][j]==0&&dian[i][j+1]==0){
				a=i;
				b=j;
				break;
			}
			else continue;
		}
	}

    for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(dian[i][j]==0&&dian[i-1][j]==0&&dian[i][j-1]==0){
				c=i;
				d=j;
				break;
			}
			else continue ;
		}
	}
	s=(c-a-1)*(d-b-1);
	printf("%d",s);
}