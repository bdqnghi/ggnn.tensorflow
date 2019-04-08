void main()
{
	int m,n,i,j,k=0,h,f=0,a[100],b[7];
    scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{ 
        for(j=2;j<=sqrt(i)&&i%j!=0;j++){}
		if(j>sqrt(i))
		{
            b[0]=i/1000000;
			b[1]=i/100000-10*b[0];
			b[2]=i/10000-100*b[0]-10*b[1];
			b[3]=i/1000-1000*b[0]-100*b[1]-10*b[2];
			b[6]=i%10;
			b[5]=(i%100-b[6])/10;
			b[4]=i/100-10000*b[0]-1000*b[1]-100*b[2]-10*b[3];
			for(j=0;j<7&&b[j]==0;j++){}
            for(h=0;j<7&&b[6-h]==b[j];h++,j++){}
			if(j==7)
			{
               a[f]=i;f++; 
			}
		
		}
	}
	if(f>0)
	{
		for(i=0;i<f-1;i++)
		{
			printf("%d,",a[i]);
		}
	    printf("%d",a[f-1]);
    }
	else
		printf("no");
}