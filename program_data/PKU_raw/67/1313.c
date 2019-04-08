main()
{
  int n,i,a1,a2,b[100][2];
  float m,c[100];
  scanf("%d",&n);
  scanf("%d %d",&a1,&a2);
  m=((float)a2)/((float)a1);
  for(i=0;i<n-1;i++)
  { scanf("%d %d",&b[i][0],&b[i][1]); 
    c[i]=((float)b[i][1])/((float)b[i][0]); }
  for(i=0;i<n-1;i++)
  { if(fabs(c[i]-m)<=0.05)
    { printf("same\n"); }
    else
    { if((c[i]-m)>0.05)
      { printf("better\n"); }
      else
      { printf("worse\n"); }
    }
  }
}
    
  