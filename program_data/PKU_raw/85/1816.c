int main()
{ 
  int n,i,j;
  char c[30];
  int sz[30]={0};

  scanf("%d\n",&n);

  for(i=0;i<n;i++)
  {
	  gets(c);

	  if((c[0]>='a' && c[0]<='z') || (c[0]>='A' && c[0]<='Z') || (c[0]=='_'))
	  {
		  for(j=1;c[j]!='\0';j++)
		  {
			  if(!((c[j]>='a' && c[j]<='z') || (c[j]>='A' && c[j]<='Z') || (c[j]=='_') || (c[j]>='0' && c[j]<='9')))
			  {
				 sz[i]=1;
				 break;
			  }
		  }
	  }
	  else
	  {
		  sz[i]=1;
	  }
  }

  for(i=0;i<n;i++)
  {
	  if(sz[i]==0)
	  {
		  printf("yes\n");
	  }
	  else
	  {
		  printf("no\n");
	  }
  }
  
 
 

  return 0;
}
