int main()
{
	int k,i,j,m=0,n,max=0;
	int a[25],t[25]={0},s[25]={0};
    scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",&a[i]);
	t[k-1]=1;
	if(k==1)
		printf("1\n");
	else
	{
		for(i=k-2;i>=0;i--)
		{
            for(j=i+1;j<k;j++)
			{
			    if(a[j]<=a[i])
				{
				    s[m]=t[j];
				    m++;
				}
			}
		    m=0;
		    max=s[0];
		    for(n=1;n<25;n++)
			{
			    if(s[n]>max)
				    max=s[n];
			}
		    for(j=0;j<25;j++)
			    s[j]=0;
		    t[i]=max+1;
		}

	    max=0;
	    for(i=0;i<k;i++)
		{
		    if(t[i]>max)
			    max=t[i];
		}
	    printf("%d\n",max);
	}
	return 0;
}