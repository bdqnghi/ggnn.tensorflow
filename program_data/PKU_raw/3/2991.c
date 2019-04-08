int main()
{ int n,k,i=0,j=0,flag=0;
  int str[1000];
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
   scanf("%d",&str[i]);
  i=0;
  for(i=0;i<n/2+1;i++)
  {  j=0;
	  for(j=0;j<n;j++)
	  { 
		  if((k-str[j])==str[i])
		  {flag=1;
	       break;
		  }
	  }
	  
	  if(flag==1)
	  {
		  printf("yes");
		  break;
	  }
  }
     if(flag==0)
	  printf("no");

	return 0;
}