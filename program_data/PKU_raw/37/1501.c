int main()
{
  int n,m,i,j,l;
  char a[L];
  int b[L];
  int state; 
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    	scanf("%s",a);
    	state=0;
	l=strlen(a);
     for(j=0;j<l;j++)
     {
	  b[j]=0;	
	}
	for(j=0;j<l;j++)
	{
	  for(m=0;m<l;m++)
	  {
	    if(a[j]==a[m])
	    {
	      b[j]++;		
	    }
	  }
	}
	for(j=0;j<l;j++)
	{
	  if(b[j]==1)
	  {
	    printf("%c\n",a[j]);
	    state=1;
	    break;		
	  }	
	}
	if(state==0)
	{
	  printf("no\n");	
	}	
  }
  return 0;
}
