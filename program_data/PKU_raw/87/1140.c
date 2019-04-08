int main()
{
	int a[100],b[100],c[100],d[100],e[100],f[100];
	int kaishi[100],jieshu[100],shijian[100];
	int i,p=0;
	for(i=0;i<100;i++)
	{
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if (a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0)
		{
			break;
		}
		else
		{
			kaishi[i]=3600*a[i]+60*b[i]+c[i];
		    jieshu[i]=12*3600+3600*d[i]+60*e[i]+f[i];
		    shijian[i]=jieshu[i]-kaishi[i];
	      
		}
		p++;
		
	}
	for(i=0;i<p;i++)
	{
		printf("%d\n",shijian[i]);
	}
	

	


	return 0;
}
