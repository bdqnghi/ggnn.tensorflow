void main()
{
	int n,i,j,s,max;
	int qimo[150],ban[150],lun[150],zong[150];
	char name[150][20],xue[150],xi[150],the[20];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d %d %c %c %d",name[i],&qimo[i],&ban[i],&xue[i],&xi[i],&lun[i]);


	for(i=0;i<n;i++)
	{
		zong[i]=0;
		
		if(qimo[i]>80 && lun[i]>=1)
			zong[i]=zong[i]+8000;
		if(qimo[i]>85 && ban[i]>80)
			zong[i]=zong[i]+4000;
		if(qimo[i]>90)
			zong[i]=zong[i]+2000;
		if(qimo[i]>85 && xi[i]=='Y')
			zong[i]=zong[i]+1000;
		if(ban[i]>80 && xue[i]=='Y')
			zong[i]=zong[i]+850;
	}

	max=zong[0];
	strcpy(the,name[0]);
	
	for(i=1;i<n;i++)
		if(zong[i]>max)
		{
			max=zong[i];
			strcpy(the,name[i]);
		}


	s=0;

	for(i=0;i<n;i++)
		s=s+zong[i];


		printf("%s\n",the);
		printf("%d\n",max);

	printf("%d\n",s);
}