int main()
{
	int n,i,m=0,r=0,e,j;
	char id[100][10],a[100][10],b[100][10],c[100];
	int nl[100],am[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",id[i],&nl[i]);
	}
	for(i=0;i<n;i++){
		if(nl[i]>=60){
			strcpy(a[m],id[i]);
			am[m]=nl[i];
			m++;
		}
		else{
			strcpy(b[r],id[i]);

			r++;
		}
	}
	for(i=m-1;i>0;i--){
		for(j=0;j<i;j++){
			if(am[j]<am[j+1]){
				e=am[j+1];
				am[j+1]=am[j];
				am[j]=e;
				strcpy(c,a[j+1]);
				strcpy(a[j+1],a[j]);
				strcpy(a[j],c);
			}
		}
	}
	for(i=0;i<m;i++){
		puts(a[i]);
	}
	for(i=0;i<r;i++){
		puts(b[i]);
	}
	return 0;
}