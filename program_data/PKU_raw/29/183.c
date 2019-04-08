int main()
{
        int sz1[300],sz2[300],m,n[300],i,j;
		double sum=0.0,fenshu[300];
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&n[i]);
              
		    for(j=0;j<n[i];j++)
			{
				sz1[0]=2;
				sz1[1]=3;
				sz2[0]=1;
				sz2[1]=2;
				if(j>=2)
				{
					sz1[j]=sz1[j-1]+sz1[j-2];
					sz2[j]=sz1[j-1];
				}
				fenshu[j]=1.0*sz1[j]/sz2[j];
				sum+=fenshu[j];
			}
			printf("%.3lf\n",sum);
			sum=0.0;
		}
		return 0;
}