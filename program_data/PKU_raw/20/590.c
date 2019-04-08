void main()
{
	char a[100],b[100],c,d[100];
	int i,j=0,k;
	while(scanf("%s%s",a,b)!=EOF)
	{
		k=strlen(a);
		j=0;
		for(i=1,c=a[0];i<k;i++)
			if(c<a[i]){
				c=a[i];
				j=i;
			}
		for(i=0;i<=j;i++)
			d[i]=a[i];
		for(i=j+1;i<k;i++)
			d[i+3]=a[i];
		for(i=0;i<3;i++,j++)
			d[j+1]=b[i];
		d[k+3]=0;
		printf("%s\n",d);
	}
}