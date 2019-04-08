
void diverse(int a)
{
	int i,j,d,num=0;
	if(a>=0)
	{
		for(i=0;pow(10,i+1)<=a;i++){}
		for(j=i;j>=0;j--)
		{
			d=floor(a/(pow(10,j)));
			num=pow(10,i-j)*d+num;
			a=a-pow(10,j)*d;
		}
		printf("%d\n",num);
	}
	else
	{
		if(a<0)
		{
			a=-a;
		    for(i=0;pow(10,i+1)<=a;i++){}
	        for(j=i;j>=0;j--)
			{
		     	d=floor(a/(pow(10,j)));
		    	num=pow(10,i-j)*d+num;
		    	a=a-pow(10,j)*d;
			}
		printf("-%d\n",num);
		}
	}
}

int main()
{
	int i,a[6];
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		diverse(a[i]);
	}
    return 0;
}
