
int main()
{
	char a[250]={0},b[250]={0},sum[250]={0};
    scanf("%s",a);
	scanf("%s",b);

	int na,i,nb;
	for(i=0;i<250;i++)
	{
		if(a[i]=='\0')
		{
			na=i-1;
			break;
		}
	}

	for(i=0;i<250;i++)
	{
		if(b[i]=='\0')
		{
			nb=i-1;
			break;
		}
	}
	
	int n=na>nb?na:nb;
	if(na<n)
	{
		for(i=0;i<=na;i++)
		{
			a[n-i]=a[na-i];
		}
		for(i=0;i<=n-na-1;i++)
		{
			a[i]=48;
		}
	}

	if(nb<n)
	{
		for(i=0;i<=nb;i++)
		{
			b[n-i]=b[nb-i];
		}
		for(i=0;i<=n-nb-1;i++)
		{
			b[i]=48;
		}
	}

	int t=0;
	for(i=n;i>=0;i--)
	{
		sum[i+1]=a[i]+b[i]+t-48;
		if(sum[i+1]-48>=10)
		{
			sum[i+1]=sum[i+1]-10;
			t=1;
		}
		else t=0;
	}

	
	if(t==1) sum[0]=49;
	else 
	{
		for(i=0;i<=n;i++)
		{
		    sum[i]=sum[i+1];
		}
		sum[n+1]=0;
	}

	if(sum[0]==48 && n>0)
	{

	    int x;
	    for(i=0;i<=n;i++)
		{
		    if(sum[i]==48 && sum[i+1]!=48)
			{
			    x=i;
			    break;
			}
		}

		for(i=0;i<=n-1-x;i++)
		{
			sum[i]=sum[i+x+1];
		}
		sum[n-x]=0;
	}

    printf("%s",sum);

    return 0;

}
