struct student
{
	int id;
	int chinese;
	int math;
}student[100000];
void main()
{
	int n,i,j,sum[100000]={0},h1=0,h2=0,h3=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&student[i].id,&student[i].chinese,&student[i].math);
	}
	int first=0;
	int sec=0;
	int thi=0;
	for(j=0;j<n;j++){
		if(first<student[j].chinese+student[j].math)
		{
			thi=sec;
			h3=h2;
			sec=first;
			h2=h1;
			first=student[j].chinese+student[j].math;
			h1=student[j].id; 
		}
		else if((first>student[j].chinese+student[j].math)&&(sec<student[j].chinese+student[j].math))
		{
			thi=sec;
			h3=h2;
			sec=student[j].chinese+student[j].math;
			h2=student[j].id;
		}
		else if((sec>student[j].chinese+student[j].math)&&(thi<student[j].chinese+student[j].math))
		{
			thi=student[j].chinese+student[j].math;
			h3=student[j].id;
		}
		else if((first==student[j].chinese+student[j].math)&&(sec<student[j].chinese+student[j].math))
		{
			thi=sec;
			h3=h2;
			sec=student[j].chinese+student[j].math;
			h2=student[j].id;
		}
		else if((sec==student[j].chinese+student[j].math)&&(thi<student[j].chinese+student[j].math))
		{
			thi=student[j].chinese+student[j].math;
			h3=student[j].id;
		}
	}
	printf("%d %d\n%d %d\n%d %d",h1,first,h2,sec,h3,thi);
}

