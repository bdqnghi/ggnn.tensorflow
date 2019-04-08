int main(){int sz[4000],az[4000];
int i=0,n,m,h=1,t=0;
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&az[i]);
if((az[i])%2!=0){sz[t]=az[i];t++;}}
for(h=1;h<t;h++){
	i=0;
for(i=0;i<t-h;i++){if(sz[i]>sz[i+1]){m=sz[i+1];
sz[i+1]=sz[i];
sz[i]=m;}}}
i=1;	
	for(i=0;i<t-1;i++){printf("%d,",sz[i]);}printf("%d",sz[t-1]);
	return 0;}
