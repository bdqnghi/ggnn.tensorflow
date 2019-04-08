int main()
{
	int n,i,j,count,time,k,a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		time=0;
		count=0;
		scanf("%d",&k);
		if(k==0)
			printf("60\n");
		else
		{
			for(j=0;j<k;j++)
			{
				scanf("%d",&a[j]);
			}
			for(j=0;j<k;j++)
			{
				count=a[j];
				time=count+3*j;
				if(time>=57)
					break;
			}	
            if(time>=57 && time<=60)
			{
			    printf("%d\n",count);
			}
			else if(time>60)
			{
                count=count-(time-60);
				printf("%d\n",count);
			}
			else if(time<57)
			{
				count=count+57-time;
				printf("%d\n",count);
			}
		}

	}
	return 0;
}