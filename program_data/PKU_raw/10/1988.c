
int main()
{
	int k,a[25],b[25];
	int i,j,p,q;
	int tmp,tmpmax,max;
	scanf("%d",&k);//k<=25
	for (i=0;i<k;i++){scanf("%d",&a[i]);b[i]=1;}
	for (p=1;p<k;p++)
	{
	    for (q=0;q<p;q++)
	    {
	        if (a[p]<=a[q])
	        {
	            tmp=b[q]+1;
	            if (tmp>b[p]) b[p]=tmp;
	        }
	    }
	}
	max=1;
	for (j=1;j<k;j++)
	{
	    if (b[j]>max) max=b[j];
	}
	printf("%d",max);
	return 0;
}
