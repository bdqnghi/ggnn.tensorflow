void main()
{
    void shuzu(int k,int a[10]);
	void zhao(int a[10],int b[10]);
    int n,m,a[10],b[10];
	scanf("%d%d",&n,&m);
	shuzu(m,a);
	shuzu(n,b);
	zhao(a,b);
}
 
void shuzu(int k,int a[10])
{
	int i;
	a[0]=k;
	
	for(i=1;i<10;i++){
	 if(k%2==0)
		a[i]=k/2;
	 else
		 a[i]=(k-1)/2;
	 k=a[i];
	}
}
void zhao(int a[10],int b[10])
{
	int i,j,a0,b0;
	for(i=0;i<10;i++){
	    if(a[i]==1) a0=i;
		if(b[i]==1) b0=i;
	}
	for(i=a0,j=b0;;i--,j--)
		if(a[i]!=b[j]){
			printf("%d\n",a[i+1]);
		break;
		}
}