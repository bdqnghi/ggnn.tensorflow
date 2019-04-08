int judge1(int n)
{
	int i;
	if(n==1)return 0;
	else
	{
		for(i=2;i<n/2;i++)
			if(n%i==0)
			{
				return 0;
				break;
			}
		return 1;
	}
}
void reverse(int a[100])
{
	int i,k=0,temp;
	for(i=1;i<100;i++)
		if(a[i]==-1)
			break;
	k=i-1;
	for(i=1;i<=k/2;i++)
	{temp=a[i];a[i]=a[k-i+1];a[k-i+1]=temp;}
}
int judge2(int n)
{
	(double)n;
	double i;int j=0;
	int a[100],b[100];
	while(j<100)
	{a[j]=-1;j++;}
	j=1;
	while(j<log10(n)+1)
	{
		i=j;
        a[j]=b[j]=(fmod(n,pow(10,i))-fmod(n,pow(10,i-1)))/pow(10,i-1);
		i++;j++;
	}	
	reverse(a);
	for(j=1;a[j]!=-1;j++)
     	if(a[j]!=b[j])
		{
	    	return 0;
			break;
		}
	return 1;
}
int main()
{
	int i,a,b,k=0,x[100],*p;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
		if(judge1(i)&&judge2(i)==1)
		{x[k]=i;k++;}
	if(k==0)printf("no");
	else{
	for(i=0;i<k-1;i++)
		printf("%d,",x[i]);
    printf("%d",x[k-1]);}
	return 0;
}


