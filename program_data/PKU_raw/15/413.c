int main(int argc, char* argv[])
{
	int i,j,a,a1=0,a2=0,b1=0,b2=0,s;
	int x[11][11];
	scanf("%d",&a);
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(x[i][j]==0){
				a1=i;
				b1=j;
				break;
			}
		}
		if(x[a1][b1]==0){
			break;
		}
	}
	for(i=a-1;i>=0;i--){
		for(j=a-1;j>=0;j--){
			if(x[i][j]==0){
				a2=i;
				b2=j;
				break;
			}
		}
		if(x[i][j]==0){
			break;
		}
	}
		s=(b2-b1-1)*(a2-a1-1);
		printf("\n%d\n",s);
		return 0;
}




