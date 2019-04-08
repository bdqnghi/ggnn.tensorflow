void main()
{
   struct stu
   {char nam[20];
   	int sco1;
   	int sco2;
   	char a[2];
   	char b[2];
   	int num;
   }stu[101];
   int n,max,i;
   int s;
   int sum[101];
   char maxn[30];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {scanf("%s",stu[i].nam);
   	scanf("%d",&stu[i].sco1);
   	scanf("%d",&stu[i].sco2);
   	scanf("%s",stu[i].a);
   	scanf("%s",stu[i].b);
   	scanf("%d",&stu[i].num);
   	sum[i]=0;
   	if(stu[i].sco1>80&&stu[i].num>=1)
   	sum[i]=sum[i]+8000;
   	if(stu[i].sco1>85&&stu[i].sco2>80)
   	sum[i]=sum[i]+4000;
   	if(stu[i].sco1>90)
   	sum[i]=sum[i]+2000;
   	if(stu[i].sco1>85&&stu[i].b[0]=='Y')
   	sum[i]=sum[i]+1000;
   	if(stu[i].sco2>80&&stu[i].a[0]=='Y')
   	sum[i]=sum[i]+850;
   }
  max=sum[0];
  strcpy(maxn,stu[0].nam);
  	s=sum[0];
  	for(i=1;i<n;i++)
  {if(sum[i]>max)
  	{max=sum[i];
  		strcpy(maxn,stu[i].nam);}
  	s=s+sum[i];
  }
  printf("%s\n",maxn);
  printf("%d\n",max);
  printf("%d\n",s);
}