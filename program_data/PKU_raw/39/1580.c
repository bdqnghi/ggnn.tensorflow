struct stu
{char name[20];
int s1;
int s2;
char a1;
char a2;
int pa;

}stu[100];
void main()
{int n,i,sumt,j;
int sum[100];
scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].s1,&stu[i].s2,&stu[i].a1,
&stu[i].a2,&stu[i].pa);
for(i=0;i<n;i++)
{sum[i]=0;
	if(stu[i].s1>80&&stu[i].pa>0)
		sum[i]=(sum[i]+8000);
	if(stu[i].s1>85&&stu[i].s2>80)
		sum[i]=(sum[i]+4000);
	if(stu[i].s1>90)
		sum[i]=(sum[i]+2000);
	if(stu[i].s1>85&&stu[i].a2=='Y')
		sum[i]=(sum[i]+1000);
	if(stu[i].s2>80&&stu[i].a1=='Y')
		sum[i]=(sum[i]+850);
}
sumt=sum[0];
for(i=1;i<n;i++)
sumt=sumt+sum[i];
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
if(sum[i]<sum[j])
break;
if(j==n)
break;}
printf("%s\n%d\n%d",stu[i].name,sum[i],sumt);
}