int main(){
	int n,i,k,l,t;
	int a[100],b[100];
	t=0;
	scanf("%d\n",&n);
	scanf("%d",&a[0]);
	for(i=1;i<n;i++){
       scanf(" %d",&a[i]);
	   }
	b[0]=a[0];
	k=0;
	for(i=0;i<n;i++){
		t=0;
		for(l=0;l<k+1;l++){
			if (a[i]==b[l]) {
				t=1;
			    break;
			}
		}
      if (t==0) {
			   k++;
               b[k]=a[i];  
		}
	}
	for (i=0;i<k;i++){
		printf("%d,",b[i]);
	}
                  printf("%d",b[k]);
   return 0;
}