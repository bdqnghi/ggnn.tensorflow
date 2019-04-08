void main()
{
	int max,n,i,g=0,sum,qimo,banji,lunwen,zong[200];
	char name[200][20],ganbu,xibu;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",name[i],&qimo,&banji,&ganbu,&xibu,&lunwen);
		zong[i]=0;
		if(qimo>80&&lunwen>=1)
				zong[i]=zong[i]+8000;
			if(banji>80&&qimo>85)
				zong[i]=zong[i]+4000;
				if(qimo>90)
				zong[i]=zong[i]+2000;
					if(qimo>85&&xibu=='Y')
				zong[i]=zong[i]+1000;
						if(banji>80&&ganbu=='Y')
				zong[i]=zong[i]+850;
	}

max=zong[0];
sum=zong[0];
for(i=1;i<n;i++)
{
if(zong[i]>max)
{
max=zong[i];
g=i;
}
	sum=sum+zong[i];
}
for(i=0;i<strlen(name[g]);i++)
	printf("%c",name[g][i]);
printf("\n%d\n%d",zong[g],sum);
}
