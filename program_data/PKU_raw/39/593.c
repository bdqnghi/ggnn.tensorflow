int main()
{
	int n,i,j,a1=8000,a2=4000,a3=2000,a4=1000,a5=850;
	int max=0,top=0,sum=0;
	int grade[100],assess[100],article[100],award[100];
	char west[100],official[100];
	char name[100][20];
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		getchar();
		for (j=0;j<20;j++)
		{
			scanf("%c",&name[i][j]);
			if (name[i][j]==' ') 
				break;
		}
		award[i]=0;
		scanf("%d %d %c %c %d",&grade[i],&assess[i],&official[i],&west[i],&article[i]);
		if (grade[i]>80 && article[i]>0)
			award[i]+=a1;
		if (grade[i]>85 && assess[i]>80)
			award[i]+=a2;
		if (grade[i]>90)
			award[i]+=a3;
		if (grade[i]>85 && west[i]=='Y')
			award[i]+=a4;
		if (assess[i]>80 && official[i]=='Y')
			award[i]+=a5;
		sum+=award[i];
		if (award[i]>max)
		{
			max=award[i];
			top=i;
		}
	}
	for(i=0;i<20;i++)
	{
		if(name[top][i]!=' ')
			printf("%c",name[top][i]);
		else
			break;
	}
	printf("\n%d\n%d\n",max,sum);
	return 0;
}
