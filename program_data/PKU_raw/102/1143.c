int main(){
	int n,i,j,x=0,y=0;
	double h,a[100],b[100];
	char c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",c,&h);
		if(c[0]=='m'){
			a[x]=h;
			x++;
		}
		else if(c[0]=='f'){
			b[y]=h;
			y++;
		}
		
	}
	double e;
	for(i=1;i<=x;i++){
		for(j=0;j<x-i;j++){
			if(a[j]>a[j+1]){
				e=a[j];
				a[j]=a[j+1];
				a[j+1]=e;
			}
		}
	}
	double f;
	for(i=1;i<=y;i++){
		for(j=0;j<y-i;j++){
			if(b[j]<b[j+1]){
				f=b[j];
				b[j]=b[j+1];
				b[j+1]=f;
			}
		}
	}
	printf("%.2lf",a[0]);
	for(i=1;i<x;i++)
	printf(" %.2lf",a[i]);
	for(i=0;i<y;i++)
	printf(" %.2lf",b[i]);
	return 0;
}