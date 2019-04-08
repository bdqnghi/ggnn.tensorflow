void main()
{
	struct stu
{char name[20];
int fen;
int pin;
char gan;
char sheng;
int lun;
int jiang;
}a[100];
	int n,i,max,k,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",a[i].name,&a[i].fen,&a[i].pin,&a[i].gan,&a[i].sheng,&a[i].lun);
		a[i].jiang=0;
		if(a[i].fen>80&&a[i].lun>0)
			a[i].jiang=a[i].jiang+8000;
		if(a[i].fen>85&&a[i].pin>80)
			a[i].jiang=a[i].jiang+4000;
		if(a[i].fen>90)
			a[i].jiang=a[i].jiang+2000;
		if(a[i].fen>85&&a[i].sheng=='Y')
			a[i].jiang=a[i].jiang+1000;
		if(a[i].pin>80&&a[i].gan=='Y')
			a[i].jiang=a[i].jiang+850;
		sum=sum+a[i].jiang;
	}
	for(i=1,k=0,max=a[0].jiang;i<n;i++)
		if(a[i].jiang>max)
		{
			max=a[i].jiang;
			k=i;
		}
		printf("%s\n%d\n%d",a[k].name,a[k].jiang,sum);
}