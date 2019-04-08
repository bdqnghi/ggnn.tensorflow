
main()
{
  char a[100],b[100],c[30][100];
  int n,i,j,m1,m2;

  scanf("%d\n",&n);
 
  for(i=0;i<n;i++)
  {
    gets(a);
	gets(b);
	if(i!=n-1) getchar();

	m1=strlen(a);
    m2=strlen(b);
	for(j=m2-1;j>=0;j--) 
		b[j+m1-m2]=b[j];
	for(j=0;j<m1-m2;j++) 
		b[j]='0';

	for(j=m1-1;j>=0;j--)
	{
		if(a[j]<b[j]) {c[i][j]=a[j]+10-b[j];a[j-1]--;}
		else c[i][j]=a[j]-b[j];
	}
	c[i][m1]=10;
  }

  for(i=0;i<n;i++)
  {
	  for(j=0;c[i][j]<10;j++)
	     printf("%d",c[i][j]);
	  printf("\n");
  }
  
}
