
int main(int argc, char* argv[])
{
	int n,a[500000],b[500000],i,j,e,m,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
               e=a[j+1];
			   a[j+1]=a[j];
			   a[j]=e;
               m=b[j+1];
			   b[j+1]=b[j];
			   b[j]=m;
			}
		}
	}
	k=0;
	for(i=0;i<n-1;i++){
		if(a[i+1]>b[i]){
			printf("no");
            k=1;
			break;
		}else if(b[i]>b[i+1]){
            b[i+1]=b[i];
		}
	}
	if(k==0){
     	printf("%d %d",a[0],b[n-1]);
	}
	return 0;
}
