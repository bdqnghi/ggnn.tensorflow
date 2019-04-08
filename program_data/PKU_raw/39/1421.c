
typedef struct{
	char name[30],sit1,sit2;
	int a,b,num;
	long totle;
	}info;

void main()
{
	int count,max=0,k,i;
	long totle=0;
	info str[100];

	scanf("%d",&count);

	for(i=0;i<count;i++)
	{
		scanf("%s %d %d %c %c %d",str[i].name,&str[i].a,&str[i].b,&str[i].sit1,&str[i].sit2,&str[i].num);
		str[i].totle=0;

		if(str[i].a>80&&str[i].num!=0)
		{str[i].totle+=8000;}

		if(str[i].a>85&&str[i].b>80)
		{str[i].totle+=4000;}

		if(str[i].a>90)
		{str[i].totle+=2000;}

		if(str[i].a>85&&str[i].sit2=='Y')
		{str[i].totle+=1000;}

		if(str[i].b>80&&str[i].sit1=='Y')
		{str[i].totle+=850;}
	}
	for(i=0;i<count;i++)
	{
		totle+=str[i].totle;
		if(str[i].totle>max)
		{			
			max=str[i].totle;
			k=i;
		}
	}
	printf("%s\n%d\n%ld\n",str[k].name,str[k].totle,totle);
}
		



