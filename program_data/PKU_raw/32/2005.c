char a[100];
char b[100];
int l,m,n,i,j,temp;
void main()
{
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
	  scanf("%s%s",a,b);
	  l=strlen(a)-1;
	  m=strlen(b)-1;
      for (j=0;j<=(l-1)/2;j++)
	  {temp=a[j];a[j]=a[l-j];a[l-j]=temp;}
	  for (j=0;j<=(m-1)/2;j++)
	  {temp=b[j];b[j]=b[m-j];b[m-j]=temp;}
      for (j=m+1;j<=l;j++)
		 b[j]='0';
	  for (j=0;j<=l;j++)
		  if (a[j]<b[j])
		  { 
			  a[j+1]--;
			  a[j]=10+a[j]-b[j];
		  } 
		  else a[j]=a[j]-b[j];
	 while (a[l]==0) l--;
	 for (j=l;j>=0;j--)
		 printf("%d",a[j]);
	 if (l==-1) printf("0\n"); else printf("\n");
  }
}