int main()
{
int n,m[1000],i,j,a[1000],b[1000];
double c[1000],sum[1000]={0};
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&m[i]);
}


for(i=0;i<n;i++){
         a[0]=2;
         a[1]=3;
         b[0]=1;
         b[1]=2;
		 

	for(j=2;j<m[i];j++){
         
	     a[j]=a[j-1]+a[j-2];

         
	    b[j]=b[j-1]+b[j-2];
	}
    for(j=0;j<m[i];j++){
    c[j]=(double)a[j]/b[j];
    sum[i]+=c[j];
		 }
	    
	
	printf("%.3lf\n",sum[i]);
}
return 0;
}