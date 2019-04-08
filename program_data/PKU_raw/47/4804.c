int main(){
    int n;    
	scanf("%d",&n);    
	int N[100],i,e;    
	for (i = 0;i < n;scanf("%d",&N[i++]));    
	for (i=0; i<n/2; e = N[i], N[i]=N[n-i-1], N[n-i-1]=e, i++);    
	for (i = 0;i < n-1;printf("%d ",N[i++]));
printf("%d",N[n-1]);
return 0;
}