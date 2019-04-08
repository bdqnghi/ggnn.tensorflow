
int main(int argc, char* argv[])
{
	int n,sum=0,a[300];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	float aver;
	aver=(float)sum/n;
    int j;
	float b[300];
	for(j=0;j<n;j++)
	{
		if((float)a[j]>aver)
		{
			b[j]=a[j]-aver;
		}
		else 
		{
			b[j]=aver-a[j];
		}
	}
	float c;
	c=b[0];
	int m,p=0,q=0;
	for(m=1;m<n;m++)
	{
		if(b[m]>c)
		{
			c=b[m];
			p=m;
		}
	}
	int s;
	for(s=p+1;s<n;s++)
	{
		if(b[s]==c)
		{
			q=s;
		}
	}
	if(q==0)
	{
		printf("%d",a[p]);
	}
	if(q!=0)
	{
		if(a[p]>a[q])
		{
			printf("%d,%d",a[q],a[p]);
		}
		else
		{
			printf("%d,%d",a[p],a[q]);
		}
	}

	
	return 0;
}


