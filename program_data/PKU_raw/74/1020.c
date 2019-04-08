void main()
{
	int m,n;
	int i,j,t,k,r[100]={0},tag,count=0,s=0,sub,x,min,minin,temp2,y;
	float temp;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		
		tag=1;
		temp=sqrt(i);
		for(j=2;j<=temp;j++)
		{
			if(i%j==0)
			{
				tag=0;
                break;
			}
		}
		if(tag==1)
		{
			
			t=i;
			sub=0;
			s=0;
			while(t!=0)
			{
				t=t/10;
				sub++;
			}
			y=i;
			for(k=0;k<sub;k++)
			{
				x=y%10;
				s=s*10+x;
				y=y/10;

			}
		
			if(s==i)
			{
				r[count]=i;
				count++;
			}
		}
	}
	for(i=0;i<count;i++)
	{
		min=r[i];
		minin=i;
		for(j=i;j<count;j++)
		{
			if(r[j]<min)
			{
				minin=j;
				min=r[minin];
			}
		}
		if(min!=r[i])
		{
			temp2=r[i];
			r[i]=r[minin];
			r[minin]=temp2;
		}
	}
	if(count==0)
		printf("no\n");
	else
	{
	for(i=0;i<count-1;i++)
	  printf("%d,",r[i]);
	printf("%d\n",r[i]);
	}
}



				

