

int main()
{
	int n,i,j,k,a[10000],b[30],c[10000];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    for (i=0;i<n;i++){
		for (j=0;j<a[i];j++){
			b[0]=1;
			b[1]=1;
			b[j+2]=b[j]+b[j+1];
			c[i]=b[j];
		}
	}
	for (k=0;k<n;k++){
	    printf("%d\n",c[k]);
	}
	return 0;
}
