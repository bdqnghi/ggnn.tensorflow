int main(int argc, char* argv[])
{
	int m,n,i,j,t,*p;
	scanf("%d%d",&n,&m);
	p=(int*)malloc(sizeof(int)*n);

	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	
	for(i=0;i<m;i++){
		t=*(p+n-1);
	    for(j=n-1;j>=1;j--){
			*(p+j)=*(p+j-1);
		}
		*p=t;
	}

	for(i=0;i<n-1;i++)
		printf("%d ",*(p+i));
		printf("%d",*(p+n-1));
	  
	printf("\n");
	free(p);
	return 0;
}



