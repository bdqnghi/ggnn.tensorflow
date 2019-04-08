int main()
{
  int i,j=0,k=0,lth1=99,lth2=0,n1,n2;
  char a[1000],b[50][20];
  gets(a);
  for(i=0;i<999;i++)
  {
	  
	  if(a[i]!=' '&&a[i]!='.'&&a[i]!='\0')
	  {
		  b[j][k]=a[i];
		  k++;
	  }
	  else 
	  {
		  b[j][k]='\0';
		  if(k<lth1)
		  {
			  lth1=k;
			  n1=j;
		  }
		  if(k>lth2)
		  {
			  lth2=k;
			  n2=j;
		  }
		  k=0;
		  j++;
	  }
	  if(a[i] == '\0'||a[i]=='.')
		  break;
	  
  }
  printf("%s\n%s",b[n2],b[n1]);

  return 0;
}