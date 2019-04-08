struct information
{
	char name[20];
	int score;
	int marks;
	char banwei;
	char xibu;
	int lunwen;
	int reward;
}a[101];
void main()
{
	int n,i,k,sum=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d%d %c %c%d",a[i].name,&a[i].score,&a[i].marks,&a[i].banwei,&a[i].xibu,&a[i].lunwen);
    for(i=0;i<n;i++)
	{   
		a[i].reward=0;
		if(a[i].banwei=='Y' && a[i].marks>80) a[i].reward=a[i].reward+850;
		if(a[i].score>80)
		{
			if(a[i].lunwen>0) a[i].reward=a[i].reward+8000;
			
			if(a[i].score>85)
			{
				if(a[i].marks>80) a[i].reward=a[i].reward+4000;
				if(a[i].xibu=='Y') a[i].reward=a[i].reward+1000;
				if(a[i].score>90) a[i].reward=a[i].reward+2000;
			}
		}
     if(a[i].reward>max) 
	 {
		 max=a[i].reward;
		 k=i;
	 }
      sum=sum+a[i].reward;
	} 
		printf("%s\n%d\n%d\n",a[k].name,max,sum);
}
