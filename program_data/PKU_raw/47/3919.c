
int main(){
  int n,i,sz[100];
  
 scanf("%d",&n);
 
 for(int i=0;i<n;i++){
	scanf("%d",&sz[i]);
	}  

for(int i=n-1;i>0;i--){
	printf("%d ",sz[i]);
	} 
	printf("%d",sz[0]);	

return 0;
}