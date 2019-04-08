
void main()
{
	int vs(int a,int b); 
	int a[1000],b[1000];
	int n,i,max=-1000,j,t,r,s,p=0;
			 scanf("%d",&n);
			 while(n!=0)
			 {for(i=0;i<n;i++)
		 scanf("%d",&a[i]);
			 max=-1000;
	for(j=0;j<n;j++)
		 scanf("%d",&b[j]);
	for(t=0;t<n;t++)
	 { for(i=n-1,j=n-1;i>t,j>t;i--,j--)
		 {
			 if(a[i]>a[i-1]) {s=a[i];a[i]=a[i-1];a[i-1]=s;}
			 if(b[j]>b[j-1]) {r=b[j];b[j]=b[j-1];b[j-1]=r;}
	 }}
 for(j=0;j<n;j++)
	 {
		 p=0;
		 for(i=0;i<n;i++)
		 { if(i+j<n) p=vs(a[i],b[i+j])+p;
		 else p=vs(a[i],b[i+j-n])+p;}
		 if(p>max) max=p;}
 printf("%d\n",max*200); scanf("%d",&n);}
}
int vs(int a,int b)
{
	int m;
	if(a>b) m=1;
	else if(a==b) m=0;
	else if(a<b) m=-1;
	return(m);
}
