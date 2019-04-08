int main ()
{
	int i,j,k;
	while(1)
	{
		int a[20]={0},sum=0;
		for(i=0;;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]==0) {k=i;break;}
		}
		if(a[0]==-1) break;
		for(i=0;i<k;i++)
			for(j=i;j<k;j++)
			{
				if(a[j]==2*a[i]||2*a[j]==a[i]) sum++;
			}
		printf("%d\n",sum);
	}
}
