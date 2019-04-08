
struct node
{
	char name[20];
	int fin;
	int bj;
	char gb;
	char west;
	int essay;
}stu[100];
void main(){
	int n,sum=0,max=0;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].fin,&stu[i].bj,&stu[i].gb,&stu[i].west,&stu[i].essay);
	}
	int a[100];
	for(i=0;i<n;i++)
	{
		a[i]=0;
		if((stu[i].fin>80)&&(stu[i].essay>=1)) a[i]=a[i]+8000;
		if((stu[i].fin>85)&&(stu[i].bj>80)) a[i]=a[i]+4000;
		if(stu[i].fin>90) a[i]=a[i]+2000;
		if((stu[i].fin>85)&&(stu[i].west=='Y')) a[i]=a[i]+1000;
		if((stu[i].gb=='Y')&&(stu[i].bj>80)) a[i]=a[i]+850;
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max) max=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==max)
		{
			printf("%s\n%d\n",stu[i].name,a[i]);
			break;
		}
	}
	printf("%d",sum);
}
