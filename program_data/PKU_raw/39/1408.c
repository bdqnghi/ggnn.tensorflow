
struct student
{
	char name[20];
	int grade;
	int mark_class;
	char monitor;
	char west;
	int paper;
	int money;
};

int c_to_d(char c[]);

void main ()
{
	int n,len;
	struct student stu[100];
    int i,j,k,l,m;
	int total=0;
	
	scanf("%d",&n);
	getchar();

	for(i=0;i<n;i++)
	{
		char help[35];
		gets(help);
		len=strlen(help);

		for(j=0;;j++)
		{
			if(help[j]==' ') {stu[i].name[j]='\0';break;}
			stu[i].name[j]=help[j];
		}
		j++;

		for(k=0;;k++)
		{
			char help2[3];
			if(help[j+k]==' ') {help2[k]='\0';stu[i].grade=c_to_d(help2);break;}
			help2[k]=help[j+k];
		}
		k++;

		for(l=0;;l++)
		{
			char help2[3];
			if(help[j+k+l]==' ') {help2[l]='\0';stu[i].mark_class=c_to_d(help2);break;}
			help2[l]=help[j+k+l];
		}
		l++;

		stu[i].monitor=help[j+k+l];
		stu[i].west=help[j+k+l+2];

		for(m=0;;m++)
		{
			char help2[3];
			if(len==(j+k+l+4+m)) {help2[m]='\0';stu[i].paper=c_to_d(help2);break;}
			help2[m]=help[j+k+l+4+m];
		}
	}

	for(i=0;i<n;i++)
	{
		stu[i].money=0;
		if (stu[i].grade>80&&stu[i].paper>0) stu[i].money+=8000;
		if (stu[i].grade>85&&stu[i].mark_class>80) stu[i].money+=4000;
		if (stu[i].grade>90) stu[i].money+=2000;
		if (stu[i].grade>85&&stu[i].west=='Y') stu[i].money+=1000;
		if (stu[i].mark_class>80&&stu[i].monitor=='Y') stu[i].money+=850;
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(stu[j].money<stu[j+1].money)
			{
				struct student y;
				y=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=y;
			}
		}
	}

	printf("%s\n%d\n",stu[0].name,stu[0].money);

	for(i=0;i<n;i++)
	{	
		total+=stu[i].money;
	}
	printf("%d",total);
}

int c_to_d(char c[])
{
	int n=strlen(c);
	int i;
	int x=0;

		for(i=0;i<n;i++)
		{
			x=x*10+c[i]-48;
		}
	return x;
}