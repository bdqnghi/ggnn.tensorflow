
  int main()
  {
	  int n;
	  scanf("%d",&n);
	  double x1,x2,p[50],s[50][3];
	  int i,k;
	  for (k=0;k<n;k++)
	  {
		  scanf("%lf%lf%lf",&s[k][0],&s[k][1],&s[k][2]);
		  double a,b,c;
		  a=s[k][0];
		  b=s[k][1];
		  c=s[k][2];
		  p[k]=b*b-4*a*c;
	  }
	  for (i=0;i<n;i++)
	  {
		  double a,b,c;
		  a=s[i][0];
		  b=s[i][1];
		  c=s[i][2];
		  p[i]=b*b-4*a*c;
		  if(p[i]>0)
		  {
			  x1=(-b+sqrt(p[i]))/(2*a);
			  x2=(-b-sqrt(p[i]))/(2*a);
		      printf("x1=%.5f;x2=%.5f\n",x1,x2);
		  }
		  else if (p[i]==0)
		  {
			  x1=(-b)/(2*a);
			  printf("x1=x2=%.5f\n",x1);
		  }
		  else if (p[i]<0)
		  {
			  double q1,q2;
			  q1=-b/(2*a);
    	      q2=sqrt(-p[i])/(2*a);
			  if(b==0)
			  {
				  printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n",q2,q2);
			  }
			  else
				  printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",q1,q2,q1,q2);
		  }
		   
	   }
       return 0;
  }