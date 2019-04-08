int b[100],c[100],d,e,f[200];
int du();
int paib();
int paic();
int add();
int show();
int main()
{
	int i;
	d=du();e=du();for(i=0;i<d;i++) b[i]=du();for(i=0;i<e;i++) c[i]=du();
	paib();paic();
	add();
	show();
	return 0;
}
int du()
{
	int x;
	scanf("%d",&x);
	return x;
}
int paib()
{
	int j,k,r;
	for(j=0;j<d-1;j++)
	{
		for(k=j+1;k<d;k++)
		{
			if(b[k]<b[j]) 
			{
				r=b[k];b[k]=b[j];b[j]=r;
			}
		}
	}
	return 0;
}
int paic()
{
	int j,k,r;
	for(j=0;j<e-1;j++)
	{
		for(k=j+1;k<e;k++)
		{
			if(c[k]<c[j]) 
			{
				r=c[k];c[k]=c[j];c[j]=r;
			}
		}
	}
	return 0;
}
int add()
{
	int	i;
	for(i=0;i<d;i++) f[i]=b[i];
	for(i=0;i<e;i++) f[i+d]=c[i];
	return 0;
}
int show()
{
	int i;
	for(i=0;i<d+e-1;i++) printf("%d ",f[i]);
	printf("%d",f[d+e-1]);
	return 0;
}
