int order(int n,int a[]){
	int i,j,k;
	for(i=0;i<n;i++)
	for(j=i;j<n;j++)
	if(a[i]>a[j]) {k=a[i];a[i]=a[j];a[j]=k;}
}
int combine(int a[],int b[],int n,int m,int c[]){
	int i,j,k;
	for(i=0;i<n;i++) c[i]=a[i];
	for(j=0;j<m;j++,i++) c[i]=b[j];
}
int input(int n,int a[]){
	int i;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
}
int output(int n,int a[]){
	int i;
	for(i=0;i<n;i++)  {printf("%d",a[i]);if(i<n-1) printf(" ");}
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n],b[m],c[n+m];
	input(n,a);
	input(m,b);
	order(n,a);
	order(m,b);
	combine(a,b,n,m,c);
	output(n+m,c);
	return 0;
}