main()
{
 int n,i;
 float a,b,c;
 float x,y,z;
 scanf("%d",&n);
 scanf("%f%f",&x,&y);
 z=y/x;
 for(i=0;i<n-1;i++)
 {
  scanf("%f%f",&a,&b);
  c=b/a;
  if(20*(c-z)>1)
  printf("better\n");
  else
  {if(20*(z-c)>1)
  printf("worse\n");
  else
  printf("same\n");}
 }
 }
