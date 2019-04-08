struct student{ int num;int a;int b;int c;};
void main()
{
	  int n,i,j,m,t;
      struct student stu[100000];
	  scanf("%d",&n);
	  for(i=0;i<n;i++)
	  {scanf("%d %d %d",&stu[i].num,&stu[i].a,&stu[i].b);
	  stu[i].c=stu[i].a+stu[i].b;}
	  for(i=0;i<3;i++)
		  for(j=i+1;j<n;j++)
		  {
			  if(stu[i].c<stu[j].c){
				  t=stu[i].c;stu[i].c=stu[j].c;stu[j].c=t;
				  m=stu[i].num;stu[i].num=stu[j].num;stu[j].num=m;}
		  }
		  for(i=0;i<3;i++)
			  printf("%d %d\n",stu[i].num,stu[i].c);
}