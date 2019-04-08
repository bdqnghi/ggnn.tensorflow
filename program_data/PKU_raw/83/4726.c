int main()
{   int a[10],b[10],n,i,w1=0;
	double GPA,c[10],w=0;
	
	scanf("%d",&n);

	for(i=0;i<=n-1;++i)
	{
	   scanf("%d",&a[i]);	
	}
	
	for(i=0;i<=n-1;++i)
	{
	   scanf("%d",&b[i]);	
	}
	
	
	
	for(i=0;i<=n-1;++i)
	{
	  if(b[i]<60){c[i]=0;}
	  else
	  {
	  	if(b[i]<=63){c[i]=1.0;}
	    else
	    {
	  	  if(b[i]<=67){c[i]=1.5;}
	      else
	      {
	  	    if(b[i]<=71){c[i]=2.0;}
	      else
	      {
	  	    if(b[i]<=74){c[i]=2.3;}
	      else
	      {
	  	    if(b[i]<=77){c[i]=2.7;}
	      else
	      {
	  	    if(b[i]<=81){c[i]=3.0;}
	      else
	      {
	  	    if(b[i]<=84){c[i]=3.3;}
	      else
	      {
	  	    if(b[i]<=89){c[i]=3.7;}
	      else
	      {
	  	    if(b[i]<=100){c[i]=4.0;}
	      else
	      {
	  	    
	      }
	      }
	      }
	      }
	      }
	      }
	      }
	      }
	      }	
	      }	
	}
	
	
	for(i=0;i<=n-1;++i)
	{
		w=w+a[i]*c[i];
	}
	
	for(i=0;i<=n-1;++i)
	{
	   	w1=w1+a[i];
	}
	printf("%3.2f",GPA=w/w1);
	
	
return 0;	
}