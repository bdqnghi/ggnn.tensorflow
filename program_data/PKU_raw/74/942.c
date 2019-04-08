void main()
{
	int m,n,o=0;
	int flag,i,j,k=0,l,b[100]={0},p;
	int a[20000]={0};
	int v,w,x,y,z;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		flag=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
		continue;
		a[k]=i;
		k++;
		
	}
	for(l=0;l<k;l++)
	{
		if(a[l]<1000)
		{v=a[l]/100,x=a[l]%10,w=a[l]/10-v*10;
			if(v==x)
			{b[o]=a[l];
			o=o++;
			}
		}
		else if(a[l]<10000)
		{v=a[l]/1000,w=a[l]/100-v*10,y=a[l]%10,x=a[l]/10-v*100-w*10;
		    if(v==y&&w==x)
			{b[o]=a[l];
			o=o++;
			}
		}
		else if(a[l]>=10000)
		{v=a[l]/10000,w=a[l]/1000-v*10,x=a[l]/100-v*100-w*10,z=a[l]%10,y=a[l]/10-v*1000-w*100-x*10;
			if(v==z&&w==y)
			{b[o]=a[l];
			o=o++;
			}
		}
	}
	
	if (o==0)printf("no");
	else 
	{
		for(p=0;p<o-1;p++)
		{
			printf("%d,",b[p]);
		}
		printf("%d",b[o-1]);
	}

}
