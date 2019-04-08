int main()
{
	int a[300]={0};
    int i=0,j,n=0,max2=0,t;
	char c;
	while(i<300)
	{
		scanf("%d",&a[i]);
		i++;
		n++;
		scanf("%c",&c);
		if(c!=',')
			break;
	}
    if(n==1)
        {
                printf("No\n");
        }
    else
		{
		for(i=1;i<n;i++)
                {
					for(j=0;j<n-i;j++)
                        {
                                if(a[j]<a[j+1])
                                {
                                        t=a[j+1];
                                        a[j+1]=a[j];
                                        a[j]=t;
                                }
                        }
                }
        
        if(a[n-1]==a[0])
			printf("No\n");
		else
		{
			for(i=0;i<n;i++)
			{
                if(a[i]<a[0])
                {
					max2=a[i];
					break;
				}
			}
			printf("%d\n",max2);
		}
	}
	return 0;
}