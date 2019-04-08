int main()
{
	int a[100][100],h,l,i,j,e,b,c,d,t=0;
	scanf("%d %d",&h,&l);
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
	        scanf("%d",&a[i][j]);
	}
	for(e=0,b=0,c=l,d=h;e<h,b<l,c>=0,d>=0;e++,b++,c--,d--)
	{
	    for(i=e,j=b;j<c;j++)
		printf("%d\n",a[i][j]);
		t+=c-b;
		if(t>=h*l)
			break;
	    for(j=c-1,i=e+1;i<d;i++)
		printf("%d\n",a[i][j]);
		if(t>=h*l)
			break;
		t+=d-e-1;
	    for(i=d-1,j=c-2;j>b-1;j--)
		printf("%d\n",a[i][j]);
		if(t>=h*l)
			break;
		t+=c-b-1;
	    for(j=b,i=d-2;i>e;i--)
		printf("%d\n",a[i][j]);
		t+=d-e-2;
		if(t>=h*l)
			break;
	}
	return 0;
}