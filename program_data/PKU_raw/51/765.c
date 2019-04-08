
main()
{
	char a[1000][1000];
	char c[1000];
	int n;	
	scanf("%d",&n);
	scanf("%s",c);
	int len,p=0,i,j,t=-1;
	len=strlen(c);	
	int count[1000][2]={0};
	int k,o;	
	for(i=0;i<len-n+1;i++)
	{
		t++;
		for(p=0;p<n;p++)
		{
			a[i][p]=c[p+t];
		}
	}
	for(i=0;i<len-n+1;i++)
	{
		for(j=i;j<len-n+1;j++)
		{
			k=0;
			for(int x=0;x<n;x++)
			{
				if(a[i][x]==a[j][x])
				{
					k++;
				}
				else
					break;
			}
			if(k==n)
				count[i][0]++;
			count[i][1]=i;
				
		}
	}
	for(int m=0;m<len-n;m++)                             
    {
        for(int s=0;s<len-n;s++)
        {
        	if(count[s][0]<count[s+1][0])
            {
				o=count[s][0];
                count[s][0]=count[s+1][0];
                count[s+1][0]=o;
                o=count[s][1];
                count[s][1]=count[s+1][1];
                count[s+1][1]=o;
            } 
        }
    }
    if(count[0][0]==1)
    	printf("NO");
    else
    	{
    		printf("%d\n",count[0][0]);
    		for(int w=0;w<n;w++)
    		{
    			printf("%c",a[count[0][1]][w]);
    		}
    		printf("\n");
    		for(int z=1;z<len-n;z++)
    		{
    			if(count[0][0]==count[z][0])
    			{
    				for(int w=0;w<n;w++)
    				{
    					printf("%c",a[count[z][1]][w]);
    				}
    				printf("\n");
    			}
    		}
    	}
}
