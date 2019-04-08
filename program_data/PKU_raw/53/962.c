int main()
{
    int n,i,k,j,o;
    int a[300],b[300],c[300];
    int m=0,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&a[i]); 
    }
    for(i=0;i<n-1;i++){
        for(k=1;k<n-i;k++){
            if(a[i]==a[i+k]){
              b[m]=i+k;
              m++;
            }
            else continue;
         }
    }

    for(i=0;i<n;i++){
         int s=1;
         for(j=0;j<m;j++){
            if(i==b[j]){
                s=0;
            }
            else continue;
         }
         if(s==1){ 
			c[p]=a[i];
			p++;
         }else continue;
    }
	for(o=0;o<p-1;o++){
		printf("%d,",c[o]);
	}
	printf("%d",c[p-1]);
    return 0;
}