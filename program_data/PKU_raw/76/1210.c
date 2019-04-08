int main()
{
	int n,i,sz[50000][2],a[100000],t=0,k,p,q,j,c,b=0,e=1;
	double f;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&sz[i][j]);
	        a[t]=sz[i][j];
	        t++;
		}
	}
	for(q=1;q<=(n+n);q++){
		for(k=0;k<(n+n-q);k++){
			if(a[k]>a[k+1]){
				p=a[k+1];
				a[k+1]=a[k];
				a[k]=p;
			}
		}
	}
	for(i=a[0];i<=(a[t-1]-1);i++){
		f=i+0.5;
		b=0;
		for(c=0;c<n;c++){ 
			if(f<sz[c][0]||f>sz[c][1]){
				b++;
			}
		}
		if(b==n){
	        printf("no");
			e=0;
			break;
		}
	}
	    if(e==1){
		    printf("%d %d",a[0],a[t-1]);
	}
    return 0;
}
