void main()
{
 int n,a[10],b[10],i,j;
 float GPA;
 double c[10],s,r;
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(j=0;j<n;j++)
  scanf("%d",&b[j]);
 i=0;
 s=0;
 while(i<n)
 {
  if(b[i]>89&&b[i]<=100)
  c[i]=4.0;
 else if(b[i]>84&&b[i]<90)
  c[i]=3.7;
 else if(b[i]>81&&b[i]<85)
  c[i]=3.3;
 else if(b[i]>77&&b[i]<82)
  c[i]=3.0;
 else if(b[i]>74&&b[i]<78)
  c[i]=2.7;
 else if(b[i]>71&&b[i]<75)
  c[i]=2.3;
 else if(b[i]>67&&b[i]<72)
  c[i]=2.0;
 else if(b[i]>63&&b[i]<68)
  c[i]=1.5;
 else if(b[i]>59&&b[i]<64)
  c[i]=1.0;
 else c[i]=0;
 s=s+c[i]*(a[i]+0.0);
 i++;
 }
 r=0;
 for(i=0;i<n;i++)
  r=r+a[i];
 GPA=s/r;
 printf("%.2f",GPA);
}

