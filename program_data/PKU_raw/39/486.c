struct student 
 {
  char name [20];
  int s1;
  int s2;
  char g;
  char x;
  int m;
  int sum;
 } stu[100];
main()
{
 int p[100]={0};
 int i=0,j=0,n,h=0,G=0;
 scanf ("%d",&n);
 for (i=0;i<n;i++)
  {
   stu[i].sum=0;
   scanf ("%s %d %d %c %c %d",stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].g,&stu[i].x,&stu[i].m);
   if (stu[i].s1>80&&stu[i].m>=1) stu[i].sum=stu[i].sum+8000;
   if (stu[i].s1>85&&stu[i].s2>80) stu[i].sum=stu[i].sum+4000;
   if (stu[i].s1>90) stu[i].sum=stu[i].sum+2000;
   if (stu[i].s1>85&&stu[i].x=='Y') stu[i].sum=stu[i].sum+1000;
   if (stu[i].s2>80&&stu[i].g=='Y') stu[i].sum=stu[i].sum+850;
   p[i]=stu[i].sum;
   G=G+p[i];
  }
 for (j=0;j<n-1;j++)
  for (i=0;i<n-1-j;i++)
   if (stu[i].sum>stu[i+1].sum)
    {
	 h=stu[i].sum;
	 stu[i].sum=stu[i+1].sum;
	 stu[i+1].sum=h;
    }
  for (i=0;i<n;i++)
  {
   if (p[i]== stu[n-1].sum)
   {
    printf ("%s\n%d\n%d\n",stu[i].name,p[i],G);
	break;
  }
}
}