int main()
{
	int i,n,j,r,t,m,q=0;
	int a[101];
	struct student {
		char name[20];
		int zong;
		int ban;
		char gan;
		char xi;
		int lun;
		int z;
	}stu[101];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
		    scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].zong,&stu[i].ban,&stu[i].gan,&stu[i].xi,&stu[i].lun);
		}
	for(i=1;i<=n;i++)
		{   stu[i].z=0;   
			if(stu[i].zong>80&&stu[i].lun>0)
				stu[i].z=stu[i].z+8000;
			if(stu[i].zong>85&&stu[i].ban>80)
				stu[i].z=stu[i].z+4000;
			if(stu[i].zong>90)
				stu[i].z=stu[i].z+2000;
			if(stu[i].zong>85&&stu[i].xi=='Y')
				stu[i].z=stu[i].z+1000;
			if(stu[i].ban>80&&stu[i].gan=='Y')
				stu[i].z=stu[i].z+850;
			a[i]=stu[i].z;
			q=q+stu[i].z;
		}
	for(j=n;j>0;j--)
	{	for(r=0;r<j;r++)
			if(stu[r].z>stu[r+1].z)
			{t=stu[r+1].z;
			stu[r+1].z=stu[r].z;
			stu[r].z=t;
			}
	}
	for(i=1;i<=n;i++)
		if(a[i]==stu[n].z)
		{	m=i;
			break;
		}

printf("%s\n%d\n%d\n",stu[m].name,stu[n].z,q);
return 0;
}