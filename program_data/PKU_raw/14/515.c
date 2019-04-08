int main()
{
	long int n,a[100000][2];
	int i,j,t,s;
	struct Student
	{int num;
	int yu;
	int shu;
	};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct Student studenti;
		scanf("%d%d%d",&studenti.num,&studenti.yu,&studenti.shu);
		a[i][0]=studenti.num;
		a[i][1]=studenti.yu+studenti.shu;
	}
	for(i=0;i<3;i++)
	{	for(j=0;j<n-1-i;j++)
		{if(a[j][1]>=a[j+1][1])
		{t=a[j][1];a[j][1]=a[j+1][1];a[j+1][1]=t;
	s=a[j][0];a[j][0]=a[j+1][0];a[j+1][0]=s;
	}
		}
	}
   for(i=1;i<=3;i++)
	  printf("%d %d\n",a[n-i][0],a[n-i][1]);
   return 0;
}
