void main()
{
 int m,i,j,flag=0;
 int n[100];
 scanf("%d",&m);
 char a[20][30];
 for(i=0;i<m;i++)
	 scanf("%s",a[i]);
 for(i=0;i<m;i++)
 {
 flag=0;
  if((a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z')||(a[i][0]=='_'))
  {
	   n[i]=strlen(a[i]);
	  for(j=1;j<n[i];j++)
	  {
	   if((a[i][j]<'0'||a[i][j]>'9')&&(a[i][j]<'a'||a[i][j]>'z')&&(a[i][j]<'A'||a[i][j]>'Z')&&(a[i][j]!='_'))
	   {  printf("no\n");
	   flag=1;
	   break;
	   }
	  }
	  if(flag==0)
		  printf("yes\n");
	}
	else
	printf("no\n");
 }

}