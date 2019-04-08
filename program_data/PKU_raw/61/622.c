
int main(int argc, char* argv[])
{
	int n,i,j;
	scanf("%d",&n);
	int a[1000];
    for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int y[30];
	for(i=0;i<n;i++){
	  for(j=0;j<a[i];j++){
		if(j==0){
			y[0]=1;
		}else if(j==1){
			y[1]=1;
		}else{
			y[j]=y[j-1]+y[j-2];
		}
	  }
       printf("%d\n",y[j-1]);
	  
	}
	
	return 0;
}
