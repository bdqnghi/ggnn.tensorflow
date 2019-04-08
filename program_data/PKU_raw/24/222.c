int main()
{
	char c[400]={'a'};
	int i,num,r,l,t,m;
	int a[100],d[100];
	gets(c);
	num=strlen(c);
	for(i=0,r=1;i<num;i++)
		if(c[i]==' '){a[r]=i;r++;l=r;}
	a[l]=num;
	a[0]=-1;
	for(r=0;r<l;r++)
		d[r]=a[r+1]-a[r]-1;
	for(r=1,t=0,m=0;r<l;r++)
	{
		if(d[t]<d[r])t=r;
		if(d[m]>d[r])m=r;
	}
	for(r=a[t]+1;r<a[t+1];r++)
			printf("%c",c[r]);
		printf("\n");
	for(r=a[m]+1;r<a[m+1];r++)
			printf("%c",c[r]);
}