struct stu{
	char str0[20];
	int gr1;
	int gr2;
	char is1;
	char is2;
	int lun;
	int total;};
int num(struct stu s);
int num2(struct stu s);
int num3(struct stu s);
int num4(struct stu s);
int num5(struct stu s);
void main()
{
	struct stu st[100];
	int n,i,max=0;
	int tot=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{  
	  scanf("%s",st[i].str0);
	scanf("%d%d %c %c%d",&st[i].gr1,&st[i].gr2,&st[i].is1,&st[i].is2,&st[i].lun);
	st[i].total=0;
	if(num(st[i])==1)
		st[i].total+=8000;
	if(num2(st[i])==1)
		st[i].total+=4000;
	if(num3(st[i])==1)
		st[i].total+=2000;
	if(num4(st[i])==1)
		st[i].total+=1000;
	if(num5(st[i])==1)
		st[i].total+=850;
	}
	for(i=0;i<n;i++)
	{  tot+=st[i].total;
		if(max<st[i].total)
			max=st[i].total;
	}
     for(i=0;i<n;i++)
	 {
		 if(st[i].total==max)
		 {printf("%s\n%d\n%d",st[i].str0,max,tot);
		 break;
		 }
	 }

}

int num(struct stu s)
{
	if(s.gr1>80&&s.lun>=1)
		return 1;
	else
		return 0;
}
int num2(struct stu s)
{
	if(s.gr1>85&&s.gr2>80)
		return 1;
	else 
		return 0;
}
int num3(struct stu s)
{
	if(s.gr1>90)
		return 1; 
	else 
		return 0;
}
int num4(struct stu s)
{
	if(s.gr1>85&&s.is2=='Y')
		return 1;
	else 
		return 0;
}

int num5(struct stu s)
{
	if(s.gr2>80&&s.is1=='Y')
		return 1;
	else
		return 0;
}
