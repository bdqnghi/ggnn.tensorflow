int main()
{
	int n,k;
    int a[1000];
    scanf("%d%d",&n,&k);
	int i,j,r,f;
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	f=0;
    for(j=0;j<n;j++)
	{
	    for(r=j+1;r<n;r++)
		{
		    if(a[j]+a[r]==k)
			{
			    f++;
			}
		}
	}
	if(f>0)
	{
		printf("yes");
	}
	else 
		printf("no");
    return 0;
}
