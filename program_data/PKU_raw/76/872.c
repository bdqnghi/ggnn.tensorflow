int main(){
	int n,i,j;
	struct {
	int min;
	int max;}a[100],b[100],c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i].min,&a[i].max);
	    }
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j].min>a[j+1].min){
				b[j]=a[j+1];
	            a[j+1]=a[j];
				a[j]=b[j];}}}
    c[0].max=a[0].max;
	for(i=0;i<n-1;i++){
		if(c[0].max>=a[i+1].min&&c[0].max>=a[i+1].max){
	c[0].min=a[0].min;
	c[0].max=c[0].max;}else if(c[0].max<a[i+1].min){
		c[0].min=0;
	    c[0].max=0;
	    break;}else if(c[0].max>=a[i+1].min&&c[0].max<a[i+1].max){
	c[0].min=a[0].min;
	c[0].max=a[i+1].max;}
	}
	if(c[0].max!=0){
		printf("%d %d",c[0].min,c[0].max);}else{
		printf("no");}
	return 0;
}
