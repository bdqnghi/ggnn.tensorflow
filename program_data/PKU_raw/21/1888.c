
float jueduizhi(float x)
{
	if(x<0)
		x=-x;
	return(x);
}

void main()
{
	int x[300],n,i,geshu=1;
	float ave,sum=0.0,d;
	int p1,p2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);

		
	for(i=0;i<n;i++)
		sum=sum+x[i];
	ave=sum/n;

	p1=x[0];p2=x[0];d=jueduizhi(ave-x[0]);
	for(i=1;i<n;i++)
		if(jueduizhi(ave-x[i])>d)
		{
			d=jueduizhi(ave-x[i]);
			p1=x[i];
			p2=p1;
		}
		else if(jueduizhi(ave-x[i])==d)
		{
			p2=x[i];
		}
if(p1>p2)
printf("%d,%d",p2,p1);
else if(p1<p2)
printf("%d,%d",p1,p2);
else printf("%d",p1);
	}

