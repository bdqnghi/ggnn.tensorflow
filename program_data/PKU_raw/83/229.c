void main()
{
  int n,i,s2=0;float s1=0,GPA;
  int a[9],b[9]; float c[9];
  scanf("%d",&n);
  for(i=0;i<=n-1;i++)
     scanf("%d",&a[i]);
  for(i=n;i<=9;i++)a[i]=0;
  for(i=0;i<=n-1;i++) 
     scanf("%d",&b[i]);
  for(i=n;i<=9;i++)a[i]=0;
  for(i=0;i<=n-1;i++)
    { if(b[i]>=90)c[i]=4.0;
	 else if(b[i]>=85)c[i]=3.7;
	      else if(b[i]>=82)c[i]=3.3;
		       else if(b[i]>=78)c[i]=3.0;
			        else if(b[i]>=75)c[i]=2.7;
					     else if(b[i]>=72)c[i]=2.3;
						      else if(b[i]>=68)c[i]=2.0;
							       else if(b[i]>=64)c[i]=1.5;
								        else if(b[i]>=60)c[i]=1.0;
										     else c[i]=0.0;
     s1=s1+c[i]*a[i];s2=s2+a[i];
     }
  GPA=s1/s2;
	  printf("%.2f",GPA);
}