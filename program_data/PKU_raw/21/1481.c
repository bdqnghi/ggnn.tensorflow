void main()
{
	int n,a[100],c[100],i,j=0;
	float ave=0,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){scanf("%d",&a[i]);ave=ave+a[i];}
	ave=ave/n;
	for(i=0;i<n;i++)b[i]=fabs(a[i]-ave);ave=b[0];
	for(i=0;i<n;i++)if(b[i]>ave)ave=b[i];
	for(i=0;i<n;i++)if(b[i]==ave)c[j++]=a[i];
	for(i=0;i<j-1;i++)
		for(n=i+1;n<j;n++)if(c[n]<c[i]){ave=c[n];c[n]=c[i];c[i]=ave;}
		for(i=0;i<j;i++){if(i==0)printf("%d",c[i]);else printf(",%d",c[i]);}
}