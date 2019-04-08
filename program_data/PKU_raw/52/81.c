
int main(int argc, char* argv[])
{
	int n,m,i,j;
	int *p,*q;
	scanf("%d%d",&n,&m);
	p=(int*)malloc(sizeof(int)*n);
    q=(int*)malloc(sizeof(int)*n);
	for (i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
    for (i=n-m,j=0;i<n;i++,j++){
		q[j]=p[i];
		printf("%d ",q[j]);
	}
	for (i=0;i<n-m;i++){
		q[m+i]=p[i];
		if (i!=n-m-1)
        printf("%d ",q[m+i]);
	}
    printf("%d",q[n-1]);
	return 0;
}
