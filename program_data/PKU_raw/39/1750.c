int main()
{
	struct student
	{
		char name[20];
		int b;
		int c;
		char d;
		char e;
		int f;
		int g;
	}a[2];
	int n,i,sum;
	scanf("%d",&n);
	scanf("%s %d %d %c %c %d",a[0].name,&a[0].b,&a[0].c,&a[0].d,&a[0].e,&a[0].f);
	a[0].g=0;
	if((a[0].b>80)&&(a[0].f>0))
		a[0].g=a[0].g+8000;
	if((a[0].b>85)&&(a[0].c>80))
		a[0].g=a[0].g+4000;
	if(a[0].b>90)
		a[0].g=a[0].g+2000;
	if((a[0].b>85)&&(a[0].e=='Y'))
		a[0].g=a[0].g+1000;
	if((a[0].c>80)&&(a[0].d=='Y'))
		a[0].g=a[0].g+850;
	sum=a[0].g;
	for(i=1;i<n;i++){
		scanf("%s %d %d %c %c %d",a[1].name,&a[1].b,&a[1].c,&a[1].d,&a[1].e,&a[1].f);
		a[1].g=0;
	if((a[1].b>80)&&(a[1].f>0))
		a[1].g=a[1].g+8000;
	if((a[1].b>85)&&(a[1].c>80))
		a[1].g=a[1].g+4000;
	if(a[1].b>90)
		a[1].g=a[1].g+2000;
	if((a[1].b>85)&&(a[1].e=='Y'))
		a[1].g=a[1].g+1000;
	if((a[1].c>80)&&(a[1].d=='Y'))
		a[1].g=a[1].g+850;
	sum=sum+a[1].g;
	if(a[0].g<a[1].g)
		a[0]=a[1];
	}
	printf("%s\n%d\n%d\n",a[0].name,a[0].g,sum);
	return 0;
}


