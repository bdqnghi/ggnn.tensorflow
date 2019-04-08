int main()
{int i,j,n;
 double max,m;
 double a[100][2];
 double d(float x1,float y1,float x2,float y2);

    scanf("%d",&n);
 for(i=0;i<n;i++)
	 scanf("%lf%lf",&a[i][0],&a[i][1]);

        max=0.0;
      for(i=0;i<n-1;i++)
	  {
		  for(j=i+1;j<n;j++)
		  {  m=d(a[i][0],a[i][1],a[j][0],a[j][1]);
	         if(m>max)   max=m;
		  }
	  }
	  printf("%.4f\n",max);
	  return 0;
}

double d(float x1,float y1,float x2,float y2)
{double k,p;
    p=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    k=sqrt(p);
	return k;
}