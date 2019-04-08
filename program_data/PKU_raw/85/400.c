
int main()
{
  int n,i,j,b=1;
  char a[100][20];
  scanf("%d",&n);
  for(i=0;i<n;i++){
                   scanf("%s",a[i]);
                   }
  for(i=0;i<n;i++)
  {
	  if((a[i][0]=='_')||(a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z'))
	  {
		  for(j=1;j<=20;j++){
			  if((a[i][j]=='_')||(a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='0'&&a[i][j]<='9'))
			  {
				  continue;
			  }
			  else if(a[i][j]!='\0')
			  {
				  printf("no\n");
				  b=0;
				  break;
			  }
			  else
				  break;
		  }
		  if(b==1)
		  {printf("yes\n");}
		  b=1;
	  }
	  else
	  {
		  printf("no\n");
	  }
  }

  return 0;
}