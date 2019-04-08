void main()
{
  char str[50][32];
  int a[100];
  int n,i,l,j;
  scanf("%d",&n);
  for(i=0;i<n;i++) 
  {
	  scanf("%s",str[i]);
	  a[i]=strlen(str[i]);
  }
  for(i=0;i<n-1;i++) 
  {   
	  l=a[i];
	  if(str[i][l-1]=='g'&&str[i][l-2]=='n'&&str[i][l-3]=='i')
	  {
		  for(j=0;j<l-3;j++) printf("%c",str[i][j]);
		  printf("\n");
	  }
      else if(str[i][l-1]=='r'&&str[i][l-2]=='e')
	  {
		  for(j=0;j<l-2;j++) printf("%c",str[i][j]);
          printf("\n");
	  }
      else if(str[i][l-1]=='y'&&str[i][l-2]=='l')
	  {
		  for(j=0;j<l-2;j++) printf("%c",str[i][j]);
		  printf("\n");
	  }
  }
      l=a[n-1];
      if(str[n-1][l-1]=='g'&&str[n-1][l-2]=='n'&&str[n-1][l-3]=='i')
	  {
		  for(j=0;j<l-3;j++) printf("%c",str[n-1][j]);
	  }
      else if(str[n-1][l-1]=='r'&&str[n-1][l-2]=='e')
	  {
		  for(j=0;j<l-2;j++) printf("%c",str[n-1][j]);
	  }
      else if(str[n-1][l-1]=='y'&&str[n-1][l-2]=='l')
	  {
		  for(j=0;j<l-2;j++) printf("%c",str[n-1][j]);
	  }

}
