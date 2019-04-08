void main()
{
 int i,j,k;
 char a[100][100],c[100];
 gets(c);
 for(j=0;j<100;j++)
	 for(i=0;i<100;i++)
		 a[j][i]='\0';
 for(i=0,j=0,k=0;c[k]!='\0';k++)
	{
	 if(c[k]!=' ')
	 {
	  a[i][j]=c[k];
	  j++;
	 }
	  if(c[k]==' ')
	  {
		if(i!=0)
	    a[i][j]=' ';
		i++;
		j=0;
	  }
	}
	if(i!=0)
	{
	printf("%s ",a[i]);
	for(i=i-1;i>=0;i--)
		printf("%s",a[i]);
	}
	else
	puts(c);
}
	