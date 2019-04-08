int main()
{
	int str[500]={0
	};
	int n,i,j,k,flag;
    scanf("%d",&n);
    for(k=0;k<n;k++)
	{
		scanf("%d",&str[k]);
	}
    for(i=0;i<n;i++)
	{
		if(i==0)
		{
			printf("%d",str[0]);
        }
		if(i!=0) 
		{
			flag=1;
		    for(j=0;j<i;j++)
			{
				if(str[j]==str[i])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				printf(",%d",str[i]);
			}
		}
	
	}
	
	return 0;
}

