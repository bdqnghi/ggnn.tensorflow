void main()
{
    int n,a[10],b[10],i,m=0;
	float g,s=0,t[10],gpa;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{ scanf("%d",&b[i]);}
	for(i=0;i<=n-1;i++){
	   scanf("%d",&a[i]);
	   if(a[i]>=90) g=4.0;
      else if(a[i]>=85) g=3.7;
	  else if(a[i]>=82) g=3.3;
	  else if(a[i]>=78) g=3.0;
	  else if(a[i]>=75) g=2.7;
	  else if(a[i]>=72) g=2.3;
	  else if(a[i]>=68) g=2.0;
	  else if(a[i]>=64) g=1.5;
	  else if(a[i]>=60) g=1.0;
	  else g=0;
	  t[i]=g;
	  s=s+b[i]*t[i];
    m=m+b[i];
	
	}

    gpa=s/m;
	printf("%.2f",gpa);


}