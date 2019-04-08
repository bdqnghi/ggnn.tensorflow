void main()
{
	char a[300],b[100],e[100],c[100]={0},g[100]={0},s[300]={0};
	int j,i,k,f,l,d,h=1;
	gets(a);
	gets(b);
	gets(e);

	k=strlen(a);
	d=strlen(b);

	for(i=0;i<k&&h<2;i++)
	{
		if(a[i]==b[0])
		{
			j=i;
			strncpy(g,a,j);
		for(f=0;f<d;f++,j++)
		{
			c[f]=a[j];
		}
		    j=i;
		for(f=0,l=j+d;f<k-j-d  ;f++,l++)
		{	
			s[f]=a[l];
		}
		s[k-d-j] = 0;
		if(strcmp(b,c)==0)
		{
			h=h+1;
			printf("%s",g);
		    printf("%s",e);
	    	printf("%s",s);
		}
		}
	}
	if(h==1)
		printf("%s",a);
}