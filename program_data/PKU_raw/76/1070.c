
int main()
{
	int n,i,a[51000],b[51000],k,t;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);}

    for(k=n-1;k>0;k--){
		for(i=0;i<k;i++){
			if(a[i]>a[i+1]){  t=a[i];  a[i]=a[i+1];  a[i+1]=t;
			t=b[i];  b[i]=b[i+1];  b[i+1]=t;}}}

	  int x=0;

	for(i=0;i<n-1;i++){
		if(b[0]>=a[i+1]&&b[0]<b[i+1]) b[0]=b[i+1];
		else if(b[0]>=a[i+1]&&b[0]>=b[i+1]) x=0;
		else {x=1; break;}}
        
if(x==0)  printf("%d %d",a[0],b[0]);
else printf("no");


                                                           

 













	return 0;
}


