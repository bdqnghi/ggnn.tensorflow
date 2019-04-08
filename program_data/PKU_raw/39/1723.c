
int main ()
{
	struct student
	{
		char name[20];
		int qi;
		int pin;
		char xue;
		char xi;
		int lun;
	}student[20000];
	int a,b,c,f,sum=0,j=0;
	scanf("%d",&a);
	for (b=0;b<a;b++)
	{
		f=0;
		scanf("%s %d %d %c %c %d",student[b].name,&student[b].qi,&student[b].pin,&student[b].xue,&student[b].xi,&student[b].lun);
	    if(student[b].qi>80&&student[b].lun>0) f=f+8000;
		if(student[b].qi>85&&student[b].pin>80) f=f+4000;
		if(student[b].qi>90) f=f+2000;
		if(student[b].qi>85&&student[b].xi=='Y') f=f+1000;
		if(student[b].pin>80&&student[b].xue=='Y') f=f+850;
		sum=sum+f;
		if(f>j)
		{
			j=f;
			c=b;
		}
	}
	printf("%s\n",student[c].name);
	printf("%d\n",j);
	printf("%d",sum);
	return 0;
}


		
		