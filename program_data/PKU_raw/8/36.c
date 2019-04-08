void pai(int a[],int m);
void shuru(int a[10],int b[10],int m,int n);
void main(){
	int a[10],b[10];
	int m,n;
    scanf("%d%d",&m,&n);	
	shuru(a,b,m,n);
}
    
void shuru(int a[10],int b[10],int m,int n){
	int i;
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	printf("\n");
	pai(a,m);
	pai(b,n);
	for(i=0;i<m;i++)
		printf("%d ",a[i]);
	for(i=0;i<n-1;i++)
		printf("%d ",b[i]);
                  printf("%d",b[n-1]);
         
}

void pai(int a[],int m){
	int i,j,t;
	for(j=0;j<m-1;j++)
		for(i=0;i<m-1-j;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
}