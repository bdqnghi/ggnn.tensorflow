int main()
{
int n,t,w;
int a[50000],c[50000],d[50000],e[50000];
int b[50000];

scanf("%d",&n);
for(int i=0;i<n;i++){
	scanf("%d %d",&a[i],&b[i]);
	c[i]=a[i];
    d[i]=b[i];}
for(int g=0;g<n-1;g++){
	if (c[g]<c[g+1]){
          t=c[g];
		  c[g]=c[g+1];
		  c[g+1]=t;}
	if(d[g]>d[g+1]){
          w=d[g];
		  d[g]=d[g+1];
		  d[g+1]=w;}
}
	for(int h=c[n-1]+1;h<d[n-1];h++){
	    e[h]=0;
	
	}
   e[d[n-1]]=1;
	for (int j=0;j<n;j++){
		for (int k=a[j]+1;k<=b[j];k++){
			if(e[k]==0){
			e[k]=1;}
		}
	}

	for(int z=c[n-1]+1;z<d[n-1]+1;z++){
		if (e[z]==0){
		printf("no");
		break;}
		else if (z==d[n-1]){
		printf("%d %d",c[n-1],d[n-1]);}
	}
		return 0;




}
