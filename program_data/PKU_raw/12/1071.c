

int main()
{
    int i, j, end, k;
	float a[1000];
	int n[100];
	int num[100];
	for(i=0; i<100; i++)
	{
        num[i]=-1;
    } 
	i=0;
	j=1;
	n[0]=-1;
	for(i=1; i<100; i++)
	{
		n[i]=0;
    }
	end=0;
	for(i=0; i<1000; i++)
	{
		scanf("%f", &a[i]);
		if(a[i]==-1)
		{			
            end=i;
			break;
		}
	}
    
	for(i=0; i<end; i++)
	{
		 if(a[i]==0)
		 {
			 n[j]=i;
			 j++;
		 }
	}
    

    
    k=1;
	while(n[k]!=0)
	{
        num[k]=0;
		for(i=n[k-1]+1; i<n[k]; i++)
		{
			for(j=n[k-1]+1; j<n[k]; j++)
			{
				if(a[i]/a[j]==2)
				{
					num[k]++;
				}
			}
		}
		k++;
	}
	
	k=1;
	while(num[k]!=-1)
	{
      
        printf("%d\n", num[k]);
        k++;
    }


	return 0;
}