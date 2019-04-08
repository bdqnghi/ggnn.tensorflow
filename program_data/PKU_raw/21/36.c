void main()
{	unsigned int n,i,j,a[300],b[300];float av=0,m,mm=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++) av=av+a[i];
	av=av/n;
	for(i=0;i<n;i++)
	{	if(av>a[i]) m=av-a[i];
		else m=a[i]-av;
		if(m>=mm) mm=m;
	}
	for(j=0;j<300;j++) b[j]=0;
	j=0;
	for(i=0;i<n;i++) 
	{	if(av>a[i]) m=av-a[i];
		else m=a[i]-av;
		if(m==mm) {b[j]=a[i];j++;}
	}
	for(j=0;b[j]!=0;j++) {printf("%d",b[j]);
	if(b[j+1]!=0) putchar(',');}
}