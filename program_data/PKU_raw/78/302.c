void main()
{
	int a[4]={0},h,i,j,k,t,max=0;
	char b[4]={'z','q','s','l'},x;
	
	for(h=1;h<6;h++)
	{
		for(i=1;i<6;i++)
		{
			for(j=1;j<6;j++)
			{
				for(k=1;k<6;k++)
				{
					if((h+i==j+k)&&(h+k>j+i)&&(h+j<i)&&(h!=i)&&(h!=j)&&(h!=k)&&(i!=j)&&(i!=k)&&(j!=k))
					{
						a[0]=h;a[1]=i;a[2]=j;a[3]=k;
					}
				}
			}
		}
	}

	for(h=0;h<4;h++)
	{
		for(i=0;i<3;i++)
		{
			if(a[i]<a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
				x=b[i];
				b[i]=b[i+1];
				b[i+1]=x;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%c %d\n",b[i],a[i]*10);
	}
}
