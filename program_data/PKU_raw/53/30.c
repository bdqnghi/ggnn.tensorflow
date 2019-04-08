void main()
{
	int n,a[310],i,j,b[310]={0},*p;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	p=b;

	int chong,l=0;
	for(i=0;i<n;i++)
		{chong=0;
		 for(j=0;j<n;j++) if(a[i]==b[j]) chong=1;
		 if(chong);
		 else{*p=a[i];p++;l++;}
		}
	printf("%d",b[0]);
	for(i=1;i<l;i++)printf(",%d",b[i]);
	printf("\n");
}