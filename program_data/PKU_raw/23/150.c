void main()
{
	char c,a[400],b[40][20];
	int i=0,j,k=0,t=0;
	c=getchar();
	while(c!='\n')
	{
		a[i]=c;
		i++;
		c=getchar();
	}
	a[i]=' ';
	for(j=0;j<=i;j++)
	{
		b[k][t]=a[j];
		t++;
		if(a[j]==' ')
		{
			b[k][t-1]='\0';
			k++;
			t=0;
		}
	}
	for(i=k-1;i>0;i--)
		printf("%s ",b[i]);
	printf("%s\n",b[0]);
}