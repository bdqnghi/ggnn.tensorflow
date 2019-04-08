
void main()
{
	

	while(1)
	{
		int a[1024]={0},b[1024]={0},choose[1024]={0},bchoose[1024]={0};
		int n;
		scanf("%d",&n);
		if(n==0)
			break;


		int i,j;

		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
			choose[i]=n;
			bchoose[i]=0;
		}

		for(i=0;i<n-1;i++)
			for(j=i+1;j<=n-1;j++)
			{
				if(a[j]>=a[i])
				{
					int temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
				if(b[j]>=b[i])
				{
					int temp=b[j];
					b[j]=b[i];
					b[i]=temp;
				}
			}


		int win=0,deuce=0,lose=0;
		
		int heada=0,headb=0,taila=n-1,tailb=n-1;
		while(heada<=taila&&headb<=tailb)
		{
			if(a[heada]>b[headb])
				{
					choose[heada]=headb;
					bchoose[headb]=1;
					win++;
					heada++;
					headb++;
				}
				else if(a[taila]>b[tailb])
				{
					choose[taila]=tailb;
					bchoose[tailb]=1;
					win++;
					taila--;
					tailb--;
				}
				else
				{
					choose[taila]=headb;
					bchoose[headb]=1;
					if(a[taila]<b[headb])
						lose++;
					else 
						deuce++;
					headb++;
					taila--;
				}
		}

		int money=200*win-(lose)*200;
		printf("%d\n",money);

		
	}
}