int main()
{
	int n,i,a,j,fz[1000],fm[1000];
	double fs[1000],zh=0;
	scanf("%d",&n);
	fz[0]=2;
	fz[1]=3;
	fm[0]=1;
	fm[1]=2;
	fs[0]=(double)fz[0]/fm[0];
	fs[1]=(double)fz[1]/fm[1];
	zh=fs[0]+fs[1];
	for(j=0;j<n;j++)
	{
		scanf("%d",&a);	
		if(a==1)
		{
			printf("2.000\n");
			continue;
		}
		else if(a>1)
		{
			for(i=2;i<a;i++)
			{
				fz[i]=fz[i-1]+fz[i-2];
				fm[i]=fm[i-1]+fm[i-2];
				fs[i]=(double)fz[i]/fm[i];
				zh=zh+fs[i];
			}
			printf("%.3lf\n",zh);
			zh=fs[0]+fs[1];
		}
	}
  return 0;
}


