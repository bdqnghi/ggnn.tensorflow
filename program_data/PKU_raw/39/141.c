
void main()
{
int n,i,j,sum=0;
struct student
{
	char name[20];
	int a;
	int b;
	char x;
	char g;
	int lun;
	int money;
}stu[103];


scanf("%d",&n);
for(i=0;i<n;i++)
{
 

   scanf("%s %d %d %c %c %d", stu[i].name, &stu[i].a, &stu[i].b, &stu[i].g, &stu[i].x, &stu[i].lun);
   stu[i].money=0;
}

for(i=0;i<n;i++)
{
 if(stu[i].a>80&&stu[i].lun>0)
  stu[i].money=stu[i].money+8000;
 if(stu[i].a>85&&stu[i].b>80)
 stu[i].money=stu[i].money+4000;
 if(stu[i].a>90)
 stu[i].money=stu[i].money+2000;
 if(stu[i].a>85&&stu[i].x=='Y')
 stu[i].money=stu[i].money+1000;
 if(stu[i].b>80&&stu[i].g=='Y')
 stu[i].money=stu[i].money+850;
 sum=sum+stu[i].money;
}
for(j=1;j<n;j++)
{
	for(i=0;i<n-j;i++)
	{
		if(stu[i].money<stu[i+1].money)
		{
			stu[102]=stu[i];
			stu[i]=stu[i+1];
			stu[i+1]=stu[102];
		}
	}
}


	
   printf("%s\n",stu[0].name);

   printf("%d\n",stu[0].money);
   printf("%d\n",sum);
}