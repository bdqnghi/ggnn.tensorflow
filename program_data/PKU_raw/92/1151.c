const long maxn=1000;

long n;
long a[maxn+10],b[maxn+10];

long mark[maxn+10];

void Sort(long a[]){
    long i,j,k;
    for(i=1;i<n;i++){
	for(j=i+1;j<=n;j++){
	    if(a[j]<a[i]){
		k=a[j];a[j]=a[i];a[i]=k;
	    }
	}
    }
}

main(){
    long i,j,k,win,tie,ans,ok,s1,t1,s2,t2;
    for(scanf("%ld",&n);n>0;scanf("%ld",&n)){
        for(i=1;i<=n;i++){
	    scanf("%ld",a+i);
        }
        for(i=1;i<=n;i++){
	    scanf("%ld",b+i);
        }
        Sort(a);Sort(b);
        s1=1;
        t1=n;
        s2=1;
        t2=n;
        ans=0;
        while(t1>=s1){
            while((a[s1]>b[s2]) && (s1<=t1)){
                ans+=200;
                s1++;s2++;
            }
            while((a[t1]>b[t2]) && (s1<=t1)){
                ans+=200;
                t1--;t2--;
            }
            if(t1>=s1){
                if(a[s1]<b[t2])ans-=200;
                s1++;t2--;
            }
        }
        printf("%ld\n",ans);
    }    
    return 0;
}
