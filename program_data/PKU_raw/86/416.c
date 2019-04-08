int main()
{
    int n,i,t,m,g,hh;
    int a[60];
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%d",&m);
    	for(t=0;t<m;t++){
    		scanf("%d",&a[t]);
    	}
    	if(m==0) printf("60\n");
    	else if(m==1){
    		if(a[0]>=60) g=60;
    		else if(a[0]<=57) g=57;
    		else g=a[0];
    		printf("%d\n",g);
    		}
    	else{
    	for(t=0;t<m;t++){
    		if(a[t]+3*t<=60)
    		hh=t;
    	}
    	if(a[hh]+3*hh<=57) g=57-3*hh;
    	else g=a[hh];
    	printf("%d\n",g);
    	}
    }
    return 0;
    }