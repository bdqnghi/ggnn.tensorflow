
int main(int argc, char* argv[])
{
	int n;
	char name[100][50];
	int qimo[100];
	int banji[100];
	char ganbu[100];
	char xibu[100];
	int lunwen[100];
	int i=0,sum[100]={0},sumz=0,k=0;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%s%d%d %c %c%d",name[i],&qimo[i],&banji[i],&ganbu[i],&xibu[i],&lunwen[i]);
	}

	for(i=0;i<n;i++)
	{
		if(qimo[i]>80&&lunwen[i]>=1) sum[i]+=8000;
		if(qimo[i]>85&&banji[i]>80) sum[i]+=4000;
		if(qimo[i]>90) sum[i]+=2000;
		if(qimo[i]>85&&xibu[i]=='Y') sum[i]+=1000;
		if(banji[i]>80&&ganbu[i]=='Y') sum[i]+=850;
	}
	int summax=sum[0];
	for(i=1;i<n;i++)
	{
		sumz+=sum[i];
		if(sum[i]>summax) 
		{
			summax=sum[i];
			k=i;
		}
	}
	sumz=sumz+sum[0];
	
	printf("%s\n%d\n%d\n",name[k],sum[k],sumz);

	return 0;
}