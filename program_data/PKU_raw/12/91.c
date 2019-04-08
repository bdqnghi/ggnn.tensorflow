int main()
{
	int a[16],i,j,k,s;
	while(1)
	{
		s=0;
		for(i=0;;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]==-1)return 0;
			else if(a[i]==0)break;
		}
		for(j=0;j<=i-1;j++)
			for(k=0;k<=i-1;k++)
				if(a[j]==a[k]*2)
				{s++;break;}
		printf("%d\n",s);
	}
}