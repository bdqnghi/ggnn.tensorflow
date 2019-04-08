int factor(int N, int min){
	int result=1, i;
	if(N<min)
	return 0;
	for(i=min;i<N;i++){
		if(N%i==0){
			result+=factor(N/i,i);
			}
		}
	return result;
	}
int main(){
	int n,m,j,re;
	scanf("%d",&n);	
	for(j=0;j<n;j++){
		scanf("%d",&m);
		re=factor(m,2);
		printf("%d\n",re);
		}
	scanf("%d",&n);
	return 0;
	}
