int main(int argc, char* argv[])
{
	int m,n,i,i1,temp;
	int a[100];
	scanf("%d%d",&m,&n);
	n=n%m;
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	if (n==0||n==m)goto a;
	else if(n!=0){
	for(i=0;i<n;i++){
		for(i1=m-1;i1>0;i1--){
			temp=a[i1-1];
			a[i1-1]=a[i1];
			a[i1]=temp;
		}
	}
	}
a:	for(i=0;i<m-1;i++)printf("%d ",a[i]);
	printf("%d",a[m-1]);
	return 0;
}
