
void main()
{ int n,i,l,k;
  char a[50][20],b[2];
  scanf("%d",&n);

  for(i=0;i<=n;i++)
  {	  gets(a[i]);
      l=strlen(a[i]);
	  b[0]=a[i][l-2];
	  b[1]=a[i][l-1];
	  k=strcmp(b,"ly");

	  if(k>0) a[i][l-3]='\0';
	  else a[i][l-2]='\0';}

  for(i=1;i<=n;i++)
  { puts(a[i]);
}

  

  

}