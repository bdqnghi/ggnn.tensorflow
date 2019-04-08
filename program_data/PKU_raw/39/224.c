struct m{
	char l[50];
	int a;
	int b;
	char x;
	char y;
	int z;
	int s;
};
struct m la[1000];
struct m mo;
void main()
{
	int n,i,j,zo=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		la[i].z=0;
		scanf("%s %d %d %c %c %d",&la[i].l,&la[i].a,&la[i].b,&la[i].x,&la[i].y,&la[i].z);
	}
	for(i=0;i<n;i++)
	{
		la[i].s=0;
		if(la[i].a>80&&la[i].z!=0)
			la[i].s=la[i].s+8000;
		if(la[i].a>85&&la[i].b>80)
			la[i].s=la[i].s+4000;
		if(la[i].a>90)
			la[i].s=la[i].s+2000;
		if(la[i].a>85&&la[i].y==89)
			la[i].s=la[i].s+1000;
		if(la[i].b>80&&la[i].x==89)
			la[i].s=la[i].s+850;
	}
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(la[j].s<la[j+1].s)
			{
				mo=la[j];
				la[j]=la[j+1];
				la[j+1]=mo;
			}
	for(i=0;i<n;i++)
		zo=zo+la[i].s;
	printf("%s\n%d\n%d\n",la[0].l,la[0].s,zo);
}
