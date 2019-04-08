void main()
{
	char c[1000];
	int a[300]={0};
	int i,j,t,k;
	gets(c);
	j=0;
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==' '&&t==0)  j=j+1,t=1;
		else if(c[i]!=' ')  a[j]=a[j]+1,t=0;
	}
	if(j==0) printf("%d",a[0]);
	else if(j>0)
	{
	   printf("%d",a[0]);
	   for(k=1;k<=j;k++)
		  printf(",%d",a[k]);
	}
}
