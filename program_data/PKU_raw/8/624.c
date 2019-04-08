void maopao(int m,int n,int a[200],int b[100])
{
	int tempt,i,j;
	for(j=0;j<m-1;j++){/*???????*/
		for(i=0;i<m-j-1;i++){
			if(a[i]>a[i+1]){
				tempt=a[i];
				a[i]=a[i+1];
				a[i+1]=tempt;
			}
		}
	}
	for(j=0;j<n-1;j++){
		for(i=0;i<n-j-1;i++){
			if(b[i]>b[i+1]){
				tempt=b[i];
				b[i]=b[i+1];
				b[i+1]=tempt;
			}
		}
	}
}
void jieshang(int m,int n,int a[200],int b[100]){
	int i;
	for(i=0;i<n;i++)
		a[m+i]=b[i];
}
void shuchu(int m,int n,int a[200]){
	int i;
    for(i=0;i<m+n-1;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[m+n-1]);
}
void main()
{
	int m,n,i,a[200],b[100];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	maopao(m,n,a,b);
	jieshang(m,n,a,b);
	shuchu(m,n,a);
}
