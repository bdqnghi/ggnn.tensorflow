int b[100000];

struct student 
	{   int num;
	    int  score1;
		int score2;
		
	}a[100000];

void main()
{   int max(int b[],int n);
	
		int i,j=0,n,c;
  
		scanf("%d",&n);
	
     for (i=0;i<n;i++)
	 {      
		 scanf("%d%d%d",&a[i].num,&a[i].score1,&a[i].score2);
	      b[i]=a[i].score1+a[i].score2;
	 }
	while(j<3)
	{
	       	c=max(b,n) ;
		 for (i=0;i<n;i++)
		 {    
			 if (b[i]==c)
			 {
				 printf("%d %d\n",a[i].num,b[i]);
				 b[i]=0;j=j+1;
				 if (j==3) break;
			 }
			
		 }
	}
	 
       

}
int max(int b[],int n)
{
	int c,i;
	   c=b[0];
      for (i=0;i<n;i++)
	  {
      if (c<b[i])
		  c=b[i];
	  }
	  return(c);
}
