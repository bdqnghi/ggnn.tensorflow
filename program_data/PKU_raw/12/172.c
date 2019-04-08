int a[16]={0},k;
void scan();

void main()

{
	scanf("%d",&a[0]);
	while(a[0]>0)
	{
		scan();
		scanf("%d",&a[0]);
	}
}
void scan()
{
	
    int i,j=1,n=0,h,t;
	while(scanf("%d",&a[j])&&a[j]!=0)
	{
		j++;
	}
    for(i=0;i<j;i++)
	{
	    for(h=i;h<j;h++)
		{
			if(a[i]>a[h])
			{
				t=a[i];
				a[i]=a[h];
				a[h]=t;
			}
		}
	}
    for(i=0;i<j-1;i++)
	{
		for(h=i+1;h<j;h++)
		{
			if(a[h]==2*a[i])
			{
			n++;
	        break;
			}
		}
	}
		printf("%d\n",n);
}