int main()
{
      int n,i,s=0;
	  struct z
	  {
		  char a[40];
		  int l;
	  }z[1000];
	  scanf("%d",&n);
	  for(i=0;i<n;i++)
	  {
		  scanf("%s",z[i].a);
		  z[i].l=strlen(z[i].a);
	  }
	  for(i=0;i<n-1;i++)
	  {
			  
			  
				  s=s+z[i].l;
				  printf("%s",z[i].a);
				  
			  
			  if(s+z[i+1].l>=80)
			  {
				  printf("\n");
				  s=0;
			  }
			  else {
				  printf(" ");
			  s++;
			  }
			  
			  
	  }
	  printf("%s",z[n-1].a);





	return 0;
}

 

