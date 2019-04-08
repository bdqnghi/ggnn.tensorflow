void main()
{
	int n,i=0,j=0,a[10000],f=0;
	float GPA,b[10000],c,d=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a[i]);
		f=f+a[i];
		i++;
	}
	while(j<n)
	{
		scanf("%f",&b[j]);
		if(b[j]>=90)
			b[j]=4.0;
		else if(b[j]>=85)
			b[j]=3.7;
		else if(b[j]>=82)
			b[j]=3.3;
		else if(b[j]>=78)
			b[j]=3.0;
		else if(b[j]>=75)
			b[j]=2.7;
		else if(b[j]>=72)
			b[j]=2.3;
		else if(b[j]>=68)
			b[j]=2.0;
		else if(b[j]>=64)
			b[j]=1.5;
		else if(b[j]>=60)
			b[j]=1.0;
		else 
			b[j]=0;
		j++;
	}
	while(i>0)
	{
		i--;
		j--;
		c=a[i]*b[j];
		d=d+c;
	}
	GPA=d/(float)f;
	printf("%.2f",GPA);
}