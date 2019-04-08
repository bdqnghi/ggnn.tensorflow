int main()
{
    int c,d,f,n,i;
    double e;
    int a[50000],b[50000];
    scanf("%d",&n);
    for(i=0;i<n-1;i++){
        scanf("%d%d\n",&a[i],&b[i]);
    }
    scanf("%d%d",&a[n-1],&b[n-1]);
    for(i=0,c=10001;i<n;i++){
        if(c>a[i]){
            c=a[i];
        }
    }
    for(i=0,d=0;i<n;i++){
        if(d<b[i]){
            d=b[i];
        }
    }
    for(e=c+0.5;e<d;e++){
        for(i=0,f=0;i<n;i++){
            if(e>a[i]&&e<b[i]){
                f=1;
            }
        }
        if(f==0){
            break;
        }
    }
    if(f==1){
        printf("%d %d",c,d);
    }else{
        printf("no");
    }
	return 0;
	}


