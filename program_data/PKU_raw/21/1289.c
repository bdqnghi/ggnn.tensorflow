

int main()
{  int n;
   int c[300];

  scanf("%d",&n);
  int i; int sum=0;
  for(i=0;i<n;i++)
  {
	  scanf("%d",&c[i]);
  sum+=c[i];


  }
  double b;
  b=(double)sum/n;
  double largest=0;
  double  d[300]={0};
  for(i=0;i<n;i++)
  {
  if(c[i]>b)
  d[i]=(double)c[i]-b;
  else
  {
   d[i]=b-(double)c[i];
  }
  if(d[i]>largest)
	  largest=d[i];
  } 

  int j; int e;double m;
  for(i=0;i<n;i++){
	  for(j=n-1;j>i;j--)
	  { 
		  if(c[j]<c[j-1])
		  { e=c[j-1];
         c[j-1]=c[j];
		 c[j]=e;
		 m=d[j-1];
         d[j-1]=d[j];
		 d[j]=m;
		  
		  }


	  
	  
	  }
  
  }
  

  for(i=0;i<n;i++)
  {
     if(d[i]==largest)
	 {printf("%d",c[i]);
	 d[i]=0;
	 break;}


	 
  } for(i=0;i<n;i++)
  {
     if(d[i]==largest)
	 {printf(",%d",c[i]);
	 }


	 
  }

  

  
   return 0;


}

