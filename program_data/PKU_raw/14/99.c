
struct stu 
{ 
	int num; 
	int ch; 
	int math; 
	int total; 
} a[100000];
struct str 
{ 
	int num; 
	int total; 
} b[100000];

main()
{
	int i,n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d %d %d\n",&a[i].num,&a[i].ch,&a[i].math);
	b[i].num=a[i].num;
	b[i].total=a[i].ch+a[i].math;}
	for(i=0; i<3; i++)
	{		
		for(j=i+1;j<n;j++)
		if (b[i].total<b[j].total)		
		{			
			b[n]=b[i];			
			b[i]=b[j];			
			b[j]=b[n];		
		}	
	}
	for(i=0;i<3;i++)
	printf("%d %d\n",b[i].num,b[i].total);
}

