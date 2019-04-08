int main()
{
    int sz[500],js[500];
    int n,i,k,x=0,e;
    scanf("%d",&n);
    for(i=0;i<n;i=i+1){
		scanf("%d ",&sz[i]);
		}
	for(i=0;i<n;i=i+1){
		if(sz[i]%2==1){
			js[x]=sz[i];
			x=x+1;
			} 
		}
	for(k=1;k<=x;k=k+1){
		for(i=0;i<x-k;i=i+1){
			if(js[i]>js[i+1]){
				e=js[i];
				js[i]=js[i+1];
				js[i+1]=e;
				}
			}
		}
	for(i=0;i<x;i=i+1){
		if(i<x-1) printf("%d,",js[i]);
		else if(i=x-1) printf("%d",js[i]);
		}
    
    return 0;
}