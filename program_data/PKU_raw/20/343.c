void main()
{
	char str[10][14],substr[10][4],a[10][9];
	int p=0,i=0,q;
    int n[10];
/*	scanf("%s",str[p]);
	scanf("%s",substr[p]);*/
	while(scanf("%s%s",str[p],substr[p])!=EOF)
	{
	  int j=0,max,m,k=0;
	  n[p]=strlen(str[p]);
	  max=str[p][0];
	  for(i=0;i<n[p];i++)
	  if(str[p][i]>max) {max=str[p][i];j=i;}
	  m=j;
	  for(j=m;j<n[p]-1;j++)
	  {
		a[p][k]=str[p][j+1];
	    k++;
	  }
	  str[p][m+1]=substr[p][0];
	  str[p][m+2]=substr[p][1];
	  str[p][m+3]=substr[p][2];
	  k=0;
	  for(j=m+4;j<n[p]+3;j++)
      {str[p][j]=a[p][k];  k++;}
	  p++;
	 /* scanf("%s",str[p]);
	  scanf("%s",substr[p]);*/
	} 
	for(q=0;q<p-1;q++)
	{for(i=0;i<n[q]+3;i++) printf("%c",str[q][i]);
	printf("\n");}
	for(i=0;i<n[p-1]+3;i++) printf("%c",str[p-1][i]);
}