

int main()
{
	double m[41],f[41],h;
	char s[10];
	int n,nm,nf;
	int i,j;
	
	scanf("%d",&n);
	i=j=0;
	while(n--)
	{
		scanf("%s%lf",s,&h);
		if(strcmp(s,"male")==0)m[i++]=h;
		else f[j++]=h;
	}
	nm=i;nf=j;
	for(i=0;i<nm;i++)
		for(j=i+1;j<nm;j++)
			if(m[i]>m[j]){
				h=m[i];m[i]=m[j];m[j]=h;
			}
	for(i=0;i<nf;i++)
		for(j=i+1;j<nf;j++)
			if(f[i]<f[j]){
				h=f[i];
				f[i]=f[j];
				f[j]=h;
			}
	if(nm>0)printf("%.2f",m[0]);
	for(i=1;i<nm;i++)
		printf(" %.2f",m[i]);
	for(i=0;i<nf;i++)
		printf(" %.2f",f[i]);
	printf("\n");
	return 0;
}