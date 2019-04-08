int min(int b[],int n){
	int i,j,k,mini,c[200];
	for(i=0;i<n;i++) c[i]=b[i];
	for(i=0;i<n;i++)
	for(j=i;j<n;j++)
	if(c[i]<c[j]) {
		k=c[i];c[i]=c[j];c[j]=k;
	}
	mini=c[n-1];
	return mini;
}
int max(int b[],int n){
	int i,j,k,maxi,c[200];
	for(i=0;i<n;i++) c[i]=b[i];
	for(i=0;i<n;i++)
	for(j=i;j<n;j++)
	if(c[i]<c[j]) {
		k=c[i];c[i]=c[j];c[j]=k;
	}
	maxi=c[0];
	return maxi;
}
int main()
{
	int i,j,k,n,m,N,M;
    char a[4000],c[200][30];
    gets(a);
    for(i=0,n=1,m=0,j=0;a[i]!='\0';i++){
    	if((a[i]==' '||a[i]==',')&&a[i-1]!=',') {n++;m++;j=0;}
		else if(a[i-1]!=',')
		{
		c[m][j]=a[i];
    	j++;
		}
    }    
    int b[n];
    for(j=0;j<n;j++) b[j]=strlen(c[j]);
    N=max(b,n);
    M=min(b,n);
    for(i=0;i<n;i++)
    if(b[i]==N) {printf("%s\n",c[i]);break;}
    for(i=0;i<n;i++)
    if(b[i]==M) {printf("%s\n",c[i]);break;}
	return 0;
	
}
