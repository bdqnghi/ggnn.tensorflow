
int main(int argc, char* argv[])
{
	int a[10000],i,b,j,sum=0;
	do
	{
		sum=0;
		scanf("%d",&b);
		if(b==-1) break;
		else a[0]=b;
		for(i=1;;i++)
		{
	    	scanf("%d",&a[i]);
	     	if(a[i]==0) break;
		}
		for(i=0;a[i]!=0;i++)
			for(j=0;a[j]!=0;j++)
				if(a[j]==a[i]*2) sum++;
		printf("%d\n",sum);
	}
	while(b!=-1);	
	return 0;
}