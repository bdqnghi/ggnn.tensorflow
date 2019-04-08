void com(char a[][5],int n,int k);
int main()
{
  int n;
  scanf("%d",&n);
  scanf("\n");
  char c[500];
  gets(c);
  char a[500][5];
  int i,j;
  for(i=0;c[i+n-1]!='\0';i++)
  {
	  for(j=0;j<n;j++)
	  {
    a[i][j]=c[i+j];
	  } 
	  a[i][n]='\0';
  }
  int k;
  k=strlen(c);
com(a,n,k);
  return 0;
}

void com(char a[][5],int n,int k)
{
  int i,j,l=0,p;
  int fre[500]={1};
  for(i=0;i<k-n+1;i++)
  {
	  fre[i]=1;
	if(a[i][0]!='\0')
	{
    for(j=0;j<k-n+1;j++)
	{
	   if(j!=i&&a[j][0]!='\0')
	   {
		   l=0;
	     for(p=0;p<n;p++)
		 {
		   if(a[j][p]!=a[i][p]) l=l+1;
		 }
		 if(l==0) {fre[i]=fre[i]+1;a[j][0]='\0';}
	   }
	}
	}
  }
  int max=fre[0];
  for(i=0;i<k-n+1;i++)
  {
	  if(fre[i]>max) max=fre[i];
  }
  if(max>1)
  {
  printf("%d",max);
  
  for(i=0;i<k-n+1;i++)
  {
	  
    if(fre[i]==max) 
	{
		putchar('\n');
		printf("%s",a[i]);
	}
  }
  }
  else
	  printf("NO");

}