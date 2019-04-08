int main()
{
	int n,i,j,t,h;
	double sz[50],a[50],b[50],c[50],k;
    char s[10];
	scanf("%d",&n);
	t=h=0;
	for(i=0;i<n;i++){
		scanf("%s %lf",s,&sz[i]);
     	if(strcmp(s,"male")==0){
	    	a[t]=sz[i];
            t++;
		}
		else{
			b[h]=sz[i];
			h++;
		}
	}
	for(j=0;j<t;j++){
		for(i=0;i<t-1;i++){
			if(a[i+1]<a[i]){
				k=a[i+1];
				a[i+1]=a[i];
				a[i]=k;
			}
		}
	}
	for(j=0;j<h;j++){
		for(i=0;i<h-1;i++){
			if(b[i+1]>b[i]){
				k=b[i+1];
				b[i+1]=b[i];
				b[i]=k;
			}
		}
	}
	for(i=0;i<t;i++){
		c[i]=a[i];
	}
	for(i=0;i<h;i++){
		c[i+t]=b[i];
	}
	for(i=0;i<t+h-1;i++){
		printf("%.2lf ",c[i]);
	}
	printf("%.2lf",c[t+h-1]);
	return 0;
}	
