struct stu
{int num;
 int score1;
 int score2;
}stu[100000];
void main()
{
	int i,j,n,a[100000],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&stu[i].num,&stu[i].score1,&stu[i].score2);
		a[i]=stu[i].score1+stu[i].score2;
	}
	for(j=0;j<3;j++)
	{
     max=0;
	 for(i=0;i<n;i++)
	 	max=(max>=a[i])?max:a[i];
	 for(i=0;i<n;i++)
	    if(a[i]==max) 
		{printf("%d %d\n",stu[i].num,a[i]);
	     a[i]=0;
  	     break;
		}
	}
}		