
void main()
{
	int n,m,i,t,j=0,k,o,r,b[30]={0};
	char pp[30]={"\0"};
    int f(int m);
   
    scanf("%d %d",&m,&n);
  	for(i=m;i<=n;i++)
  {
	  if(f(i)==1)

	 
	  {
		  strcpy(pp," ");
		// ltoa(i,pp,10);
		  o=0;r=i;
	     while(r!=0)
		 {
			 pp[o]=r%10+48;
			 r=r/10;o++;
		 }


		   t=0;
		   k=strlen(pp);
          while(t<=k)
	   {  
		   if(pp[t]==pp[k-1-t])
	          t++;
	      else
			  break;
	
		  }

		 if (t>=k) 
		 {b[j]=i;j++;}
	  } 
  }

   if(j==0)
    printf("no");
else{
  for(i=0;i<j-1;i++)
	  printf("%d,",b[i]);
  printf("%d",b[j-1]);
}


	
	   
}
int f(int q)
{
	int flag=1,i;
	for(i=2;i<q;i++)
		if(q%i==0) {flag=0;break;}
		return flag;
}


