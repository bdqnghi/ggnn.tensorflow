int main()
{
	int n,i,j,x,y,vTian[1000],vQi[1000],cnt,t;
	while(scanf("%d",&n),n)
	{
		cnt=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&vTian[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&vQi[i]);
		}

		for(i=n-1;i>=0;i--)
		{
			for(j=0;j<i;j++)
			{
				if(vTian[j]>vTian[j+1])
				{
					t=vTian[j];
					vTian[j]=vTian[j+1];
					vTian[j+1]=t;
				}
				if(vQi[j]>vQi[j+1])
				{
					t=vQi[j];
					vQi[j]=vQi[j+1];
					vQi[j+1]=t;
				}
			}
		}

		x=y=n-1;
		i=j=0;
        while(i<=x)      
        {  
            if(vTian[x]>vQi[y])  
            {
                x--;  
                y--;  
                cnt+=200;  
            }  
            else if(vTian[i]>vQi[j])  
            {
                i++;  
                j++;  
                cnt+= 200;  
            }  
            else  
            {
                if(vTian[i]<vQi[y])  
                    cnt-= 200;  
                i++;  
                y--;  
            }  
        } 
		printf("%d\n",cnt);
	}
	return 0;
}