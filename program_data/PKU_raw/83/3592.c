int main()
{
	int n;
	int xf[10];
	float cj[10];
	int i=0;
	int j=0;
	scanf("%d",&n);
	while(j<=n-1)
	{
		scanf("%d",&xf[j]);
		j++;
	}
	while(i<=n-1)
	{
		scanf("%f",&cj[i]);
		if(cj[i]>=90&&cj[i]<=100)
		{
			cj[i]=4.0;
		}
		else if(cj[i]>=85&&cj[i]<=89)
		{
			cj[i]=3.7;
		}
		else if(cj[i]>=82&&cj[i]<=84)
		{

            cj[i]=3.3;
		}
		else if(cj[i]>=78&&cj[i]<=81)
		{
			cj[i]=3.0;
		}
		else if(cj[i]>=75&&cj[i]<=77)
		{
			cj[i]=2.7;
		}
		else if(cj[i]>=72&&cj[i]<=74)
		{
			cj[i]=2.3;
		}
		else if(cj[i]>=68&&cj[i]<=71)
		{
			cj[i]=2.0;
		}
		else if(cj[i]>=64&&cj[i]<=67)
		{
			cj[i]=1.5;
		}
		else if(cj[i]>=61&&cj[i]<=63)
		{
			cj[i]=1.0;
		}
		else
		{
			cj[i]=0.0;
		}
		
		i++;
	}
	float result=0;
	int k=0;
	int x=0;
	while(k<=n-1)
	{
		result=result+xf[k]*cj[k];
		x=x+xf[k];
		k++;
			}
	result=result/x;
	printf("%.2f",result);
	return 0;
}