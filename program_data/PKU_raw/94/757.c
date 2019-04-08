void Bubble(int a[],int n)
{
	int i,j;
	int temp1;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp1=a[j];
				a[j]=a[j+1];
			    a[j+1]=temp1;     
			}
		}
	}
}
void main()
{
	int i,n,t=0,a[500],b[500];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2!=0) 
		{
			b[t]=a[i];
		    t++;
		}
    }
    Bubble(b,t);
	for(i=0;i<t;i++)
		printf("%d%c",b[i],(i==t-1)?'\n':',');
}