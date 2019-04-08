struct Student
{
    char name[20];
    int a;
	int b;
    char g;
	char x;
    int l;
	int sum;
}stu[100];
int n;
int main()
{
   scanf("%d",&n);
   int i;
   int all=0;
   for(i=0;i<n;i++)
   {
	   scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].a,&stu[i].b,&stu[i].g,&stu[i].x,&stu[i].l);
       stu[i].sum=0;
	   if(stu[i].a>80&&stu[i].l>=1)
		   stu[i].sum+=8000;
	   if(stu[i].a>85&&stu[i].b>80)
		   stu[i].sum+=4000;
       if(stu[i].a>90)
		   stu[i].sum+=2000;
	   if(stu[i].a>85&&stu[i].x=='Y')
		   stu[i].sum+=1000;
	   if(stu[i].b>80&&stu[i].g=='Y')
		   stu[i].sum+=850;
	   all+=stu[i].sum;
   }
   int max=0;
   for(i=0;i<n;i++)
   {
	   if(max<stu[i].sum)
		   max=stu[i].sum;
   }
   for(i=0;i<n;i++)
   {
	   if(stu[i].sum==max)
	   {
		   printf("%s\n",stu[i].name);
		   printf("%d\n",stu[i].sum);
		   break;
	   }
   }
   printf("%d\n",all);
   return 0;
}
