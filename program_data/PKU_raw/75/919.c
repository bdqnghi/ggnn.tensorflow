int a[1000]={0},b[1000]={0};
void main()
{
	char c;
	int i=0,num,p=0,q,max,min,j;
	while((c=getchar())!='\n')
	{
		if(c==',')
		{
			
			i++;
		}
		else if(c!=',')
		{

			a[i]=10*a[i]+c-'0';
		}
	}
	i=0;
	while((c=getchar())!='\n')
	{
		if(c==',')
		{
			
			i++;
		}
		else if(c!=',')
		{

			b[i]=10*b[i]+c-'0';
		}
	}
	num=i+1;
	min=a[0];
	max=b[0];
	for(i=0;i<num;i++)
	{
		if(a[i]<min)
			min=a[i];
		if(b[i]>max)
			max=b[i];
	
	}
	p=0;
	for(i=min;i<max;i++)
	{
		q=0;
		for(j=0;j<num;j++)
		{
			if(a[j]<=i&&b[j]>i)
				q++;
		
		}
		if(q>p)
		p=q;
	
	
	}
	printf("%d %d",num,p);
	

}