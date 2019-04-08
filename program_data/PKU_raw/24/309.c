int main()
{
	char a[500],*p;
	int i,j=1,k,b[51]={0},c[50]={0};
	gets(a);
	for(i=0;;i++){
		if(a[i]==' '){
			b[j]=i;
			j++;
		}
		if(a[i]=='\0'){
			k=i;
			b[j]=i;
			break;
		}
	}
	b[0]=-1;
	for(i=0;i<j;i++){
		c[i]=b[i+1]-b[i]-1;
	}
	int m=0,m1=0,n=c[0],n1=0;
	for(i=0;i<j;i++){
		if(c[i]>m){
			m=c[i];
			m1=i;
		}
		if(c[i]<n){
			n=c[i];
			n1=i;
		}
	}
	for(i=b[m1]+1;i<b[m1+1];i++)
		cout<<a[i];
	cout<<endl;
    for(i=b[n1]+1;i<b[n1+1];i++)
		cout<<a[i];
	return 0;
}