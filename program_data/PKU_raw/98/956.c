int main()
{ char *string,a[100]={'\0'};
  int n=0,i=0,sum=0,t=1; 
  scanf("%d",&n);
  string=a;
  scanf("%s",string);
  sum=sum+strlen(string);
  for(i=1;i<=n;i++)
  {  printf("%s",string);
	 if(i<n) 
	 {scanf("%s",string);}
	 sum=sum+strlen(string)+1;
	 
	  if(sum>80) 
	  {sum=strlen(string);printf("\n");t=0;}
      if(i<n&&t!=0)
	  { printf(" ");
	  	  }
	 t=1;
  
  }

 return(0);
}