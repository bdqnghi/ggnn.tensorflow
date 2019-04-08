
int main()
{
	int n,c,d,i,j;
	char a[101]={'\0'},b[101]={'\0'},e[101]={'\0'};
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s %s",a,b);
		c=strlen(a);d=strlen(b);
		
		for(j=d-1;j>=0;j--){
			if(a[c-d+j]>=b[j])
				e[c-d+j]=a[c-d+j]-b[j]+48;
			else {e[c-d+j]=a[c-d+j]+10-b[j]+48; a[c-d+j-1]--;}
		}
		for(j=c-d-1;j>=1;j--){
			if(a[j]<48){
				e[j]=a[j]+9;a[j-1]--;}
			else e[j]=a[j];
		}
		e[0]=a[0];
		printf("%s\n",e);
		for(j=0;j<101;j++){
			a[j]='\0';b[j]='\0';e[j]='\0';
		}
	}
	return 0;
}
	