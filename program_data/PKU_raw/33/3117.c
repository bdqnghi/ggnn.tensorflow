int main()
{
  int n,c,i,j;
  scanf("%d",&n);
  char da[n][256],ad[n][256];
  for(i=0;i<n;i++)
  {
	  scanf("%s",da[i]);
  }
  for(i=0;i<n;i++)
  {for(j=0;j<256;j++)
  {
	  if(da[i][j]=='A')
		  ad[i][j]='T';
      if(da[i][j]=='T')
		  ad[i][j]='A';
	  if(da[i][j]=='C')
		  ad[i][j]='G';
	  if(da[i][j]=='G')
		  ad[i][j]='C';
  }
  puts(ad[i]);
  }

  return 0;





}