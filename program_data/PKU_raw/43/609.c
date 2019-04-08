int main()
{   
    int n,i,j,k,t,p,q;
	scanf("%d",&n);
	for(i=3;i<=n/2;i+=2){
	    t=n-i;
	    p=(int)sqrt(i);
	    q=(int)sqrt(t);
	for(j=2;j<=p;j++){	
		if(i%j==0){
			break;}
	}
	for(k=2;k<=q;k++){
		if(t%k==0){
			break;}
    }
	if(j>p && k>q){
		printf("%d %d\n",i,t);
	}
    } 
    return 0;
}
