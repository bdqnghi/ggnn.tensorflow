void main()
{
	int f(int n);
	char a[3000];
	int b[500];
	int i,j,k,l,p,temp,sum=0,q=0;
	scanf("%s",a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==',')
		{
			q=1;
			for(j=0;j<=i-1;j++)
			{
				sum=sum+(a[j]-48)*f(i-1-j);
			}
			b[0]=sum;
			break;
		}
	}
	if(q==0)printf("No");
	else
	{
		p=1;
		for(j=i;a[j]!=0;j++)
		{
			if(a[j]==',')
			{
				sum=0;
				for(k=j+1;(a[k]!=',')&&(a[k]!=0);k++);
				for(l=j+1;l<=k-1;l++)
				{
					sum=sum+(a[l]-48)*f(k-1-l);
			
				}
				b[p]=sum;
				p++;
			}
		}
		for(k=1;k<=p-1;k++)
		{
			if(b[k]!=b[0])break;
		}
		if(k==p)printf("No");
		else
		{
		
		for(k=1;k<=p-1;k++)
			{
				if(b[k]>b[0])
				{
					temp=b[0];b[0]=b[k];b[k]=temp;
				}
			}
		


		for(k=1;k<=p-1;k++)
		{
			if(b[k]==b[0])continue;
			else b[1]=b[k];break;
		}
		for(k=2;k<=p-1;k++)
		{
			if((b[k]>=b[1])&&(b[k]<b[0]))
				{
					temp=b[1];b[1]=b[k];b[k]=temp;
				}
		}
		printf("%d\n",b[1]);
		}

	}
}
int f(int n)
{
	int i,z=1;
	for(i=1;i<=n;i++)
		z=z*10;
	return(z);
}
