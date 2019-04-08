main()
{ int i,m,k;
int c[1000]={0};
  char a[1000],b[1000],e[1000];
  gets(a);
 m=strlen(a);
  for(i=0;i<=m;i++)
	{  if(a[i]<'a')
		  b[i]=a[i];
	  else
		  b[i]=a[i]+'A'-'a';}
  c[0]=1;e[0]=b[0];
  k=0;
  for(i=1;i<=m;i++)
	  {
		  if(b[i]==b[i-1])
		  c[k]=c[k]+1;
	  else
		{  k=k+1;
		  e[k]=b[i];
		  c[k]=c[k]+1;}
  }
  for(i=0;i<=k-1;i++)
  printf("(%c,%d)",e[i],c[i]);
}