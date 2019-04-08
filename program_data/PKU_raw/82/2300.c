int main(){
	int n,i,j;
	int a[100],b[100];
	int c=0,d=0,e=0,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}

	for(i=0;i<n;i++){
			if(a[i]>=90&&a[i]<=140&&b[i]>59&&b[i]<=90){
				d=i;
				for(j=d+1;j<n;j++){
					if(a[j]>=90&&a[j]<=140&&b[j]>59&&b[j]<=90&&a[j-1]>=90&&a[j-1]<=140&&b[j-1]>59&&b[j-1]<=90){
						e=j;
					}else{
						break;
					}
				}
				f=e-d+1;
				if(f>c){
					c=f;
				}
					
			}
			
	}
	
	printf("%d",c);

	return 0;

}

