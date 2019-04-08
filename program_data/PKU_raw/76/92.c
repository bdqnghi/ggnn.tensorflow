

int main()
{
	int n;
	scanf("%d",&n);
	int xia[GESHU],shang[GESHU];
	for(int p=0;p<n;p++)
	{
		scanf("%d",&xia[p]);
		scanf("%d",&shang[p]);
	}
	int max,min;
	max=shang[0];
	min=xia[0];
	for(int q=0;q<n;q++)
	{
		if(shang[q]>max)
		{
			max=shang[q];
		}
		if(xia[q]<min)
		{
			min=xia[q];
		}
	}
	int reference=0;
	for(double r=min+0.5;r<max;r=r+1)
	{
		reference=0;
		for(int s=0;s<n;s++)
		{
			if(r>=xia[s] && r<=shang[s])
			{
				reference++;
			}
		}
		if(reference==0)
		{
			break;
		}
	}
	if(reference==0)
	{
		printf("no");
	}
	else
	{
		printf("%d %d",min,max);
	}
	return 0;
}