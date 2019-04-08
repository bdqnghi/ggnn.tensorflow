int  main( )
{
   int a[1000];
   int b[1000];
   double c[1000];
   double d[1000];
   int n,i,x=0;
   double y=0.00,z;
	   scanf ("%d",&n);
	   for(i=0;i<n;i=i+1){
		   scanf("%d",&a[i]);
       }
	   for(i=0;i<n;i=i+1){
		   scanf("%d",&b[i]);
	   }
	   for(i=0;i<n;i=i+1){
          if(b[i]>=90&&b[i]<=100)
			  c[i]=4.0;
          else if(b[i]>=85&&b[i]<=89)
			  c[i]=3.7;
          else if(b[i]>=82&&b[i]<=84)
			  c[i]=3.3;
		  else if(b[i]>=78&&b[i]<=81)
			  c[i]=3.0;
		  else if(b[i]>=75&&b[i]<=77)
			  c[i]=2.7;
		  else if(b[i]>=72&&b[i]<=74)
			  c[i]=2.3;
		  else if(b[i]>=68&&b[i]<=71)
			  c[i]=2.0;
          else if(b[i]>=64&&b[i]<=67)
			  c[i]=1.5;
		  else if(b[i]>=60&&b[i]<=63)
			  c[i]=1.0;
		  else if(b[i]<60)
			  c[i]=0.0;
	   }
	   for(i=0;i<n;i=i+1){
           d[i]=a[i]*c[i];
	   }
	   for(i=0;i<n;i=i+1){
           x=x+a[i];
		   y=y+d[i];
	   }
	   z=(y*1.00)/(x*1.00);
       printf("%.2lf",z);
return 0;
}

