struct stu
{
 int a;
 int b;
 int c;
 int d;
};
void main()
{
 int i,j,n,t;
 struct stu *p1,p2;
 scanf("%d",&n);
 p1=(struct stu*)calloc(n,sizeof(struct stu));
 for(i=0;i<n;i++)
  {
     scanf("%d %d %d",&(p1[i].a),&(p1[i].b),&(p1[i].c));
	 p1[i].d=p1[i].b+p1[i].c;
  }
  for(i=0;i<3;i++)
   for(j=i+1;j<n;j++)
    if(p1[i].d<p1[j].d)
     {
      p2=p1[i];
      p1[i]=p1[j];
      p1[j]=p2;
	}
  for(i=0;i<3;i++)
   printf("%d %d\n",p1[i].a,p1[i].d);
}

