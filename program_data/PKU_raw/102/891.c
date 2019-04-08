
int main()
{
	int n;
	struct photo
	{
		char sex[6];
		float h;
	}p[40];
	struct photo t;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %f",p[i].sex,&p[i].h);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(p[j].sex[0]=='m' && p[j+1].sex[0]=='m' && p[j].h>p[j+1].h)
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
			if(p[j].sex[0]=='f' && p[j+1].sex[0]=='f' && p[j].h<p[j+1].h)
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
			if(p[j].sex[0]=='f' && p[j+1].sex[0]=='m')
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	for(i=0;i<n-1;i++)
	printf("%.2f ",p[i].h);
	printf("%.2f\n",p[n-1].h);
	
	return 0;
} 
