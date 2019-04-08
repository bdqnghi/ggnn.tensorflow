int a[1000][1000];
int main(){
	int m[100],n,j,i,f,q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
		for(j=0;j<m[i];j++){
			scanf("%d",&a[i][j]);
			}
	}
	for(i=0;i<n;i++){
		if(m[i]==0){
			f=1;
		}
		for(j=0;j<m[i];j++){
			if(a[i][j]+3*m[i]>60){
				f=0;
				q=j;
				break;
			}else{
			f=1;
			}
		}
		if(f==0){
			if(a[i][q]>(60-3*q)){
				printf("%d\n",(60-3*q));
			}else{
			printf("%d\n",a[i][q]);
			}
		}
		if(f==1){
			printf("%d\n",(60-3*m[i]));	
		}
		}
	
 return 0;   
}








