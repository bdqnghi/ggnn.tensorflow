void main()
{
	char a[1000][1000]={1},b[100],c[100],d;
	int i,n=0;
	for(i=0;;i++)
	{
		scanf("%s%c",&a[i],&d);
		n++;
		if(d=='\n')
			break;
	}
	scanf("%s",&b);
	scanf("%s",&c);
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i],b)==0)
			printf("%s",c);
		else
			printf("%s",a[i]);
		if(i==n-1)
		    printf("\n");
	    else      
		    printf(" ");
	}
}
	