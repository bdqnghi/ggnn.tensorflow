
void main()
{
	int i,n;
	float a[100],b[100],c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	 for(i=0;i<n;i++)
	 { c[i]=b[i]/a[i];}

   for(i=1;i<n;i++)
	   if ( c[0]+0.05<c[i])printf("better\n");
	   else if( c[i]+0.05<c[0] )printf("worse\n");
	   else printf("same\n");

}
  