
int main(){
	int n,j,i,i1=0,i2=0,t1,t2;
	struct heying{
		char sex[10];
		double h;
	}heying[N],ex,male[N],fe[N];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%lf",heying[i].sex,&heying[i].h);
        if(heying[i].sex[0]=='m')
		{
			male[i1]=heying[i];
			i1++;
		}
		else
		{
			fe[i2]=heying[i];
			i2++;
		}
	}
	t1=i1;
	t2=i2;
	for(i=0;i<t1;i++)
	{
		for(j=i+1;j<t1;j++)
		{
			if(male[i].h>male[j].h)
			{
				ex=male[i];
				male[i]=male[j];
				male[j]=ex;
			}
		}
	}
	for(i=0;i<t2;i++)
	{
		for(j=i+1;j<t2;j++)
		{
			if(fe[i].h<fe[j].h)
			{
				ex=fe[i];
				fe[i]=fe[j];
				fe[j]=ex;
			}
		}
	}
	for(i=0;i<t1;i++)
	{
		printf("%.2lf ",male[i].h);
	}
	for(i=0;i<t2-1;i++)
	{
		printf("%.2lf ",fe[i].h);
	}
	printf("%.2lf\n",fe[t2-1].h);
	return 0;
}
