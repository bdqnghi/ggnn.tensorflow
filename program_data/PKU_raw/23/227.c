void main()
{
	int i,j,t,n=0,m=0,k=0;char a[100],b[100][100];
	gets(a);
	t=strlen(a);	
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			b[i][j]=0;

    for(i=0;i<t;i++)
	{
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
		{
			j=k;
			b[j][n]=a[i];
			n++;
			m=1;
		}
		else if(m==1)
		{
			k++;
			b[j][n]=0;
			n=0;
			m=0; 
		}
	}
    printf("%s",b[j]);
	for(i=j-1;i>=0;i--)
    printf(" %s",b[i]);
}
		