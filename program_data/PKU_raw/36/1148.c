int main()
{
	char a[10000],b[10000],c;
	scanf("%s %s",&a,&b);
	int i,j,m,n;
	m=strlen(a);
	n=strlen(b);
	if(m!=n)
		printf("NO");
	if(m==n&&m==1){
	if(a[0]==b[0])
		printf("YES");
	if(a[0]!=b[0])
		printf("NO");
	}
	if(m==n&&m>1){
	for(j=m-1;j>0;j--){
		for(i=0;i<j;i++){
			if(a[i]>a[i+1]){
			c=a[i];
			a[i]=a[i+1];
			a[i+1]=c;
			}
		}
	}
	for(j=n-1;j>0;j--){
		for(i=0;i<j;i++){
			if(b[i]>b[i+1]){
			c=b[i];
			b[i]=b[i+1];
			b[i+1]=c;
			}
		}
	}
	m=strcmp(a,b);
	if(m==0)
		printf("YES");
	if(m==1)
		printf("NO");
	}
	return 0;
}
