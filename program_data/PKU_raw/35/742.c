int main()
{
	int i,j,a[100][100],row,col,b[100],s[100],sum=0;
    scanf("%d,%d",&row,&col);
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",(&a[i][j]));
		}
	}
    for(i=0;i<row;i++)
	{
		b[i]=a[i][0];
	}
    for(i=0;i<row;i++)
	{
		for(j=1;j<col;j++)
		{
			
			if(b[i]>a[i][j])
            {
				b[i]=b[i];
			}else
                b[i]=a[i][j]; 
        
		}
        
	}

    for(j=0;j<col;j++)
	{
	   s[j]=a[0][j];	
	}

    
	for(j=0;j<col;j++)
	{
		for(i=1;i<row;i++)
		{
			
			if(a[i][j]<s[j])
            {
				s[j]=a[i][j];
			}else
                s[j]=s[j]; 
		}
	
	}
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++) 
		{
			if(s[j]==b[i])
			{
				printf("%d+%d",i,j);
				sum+=1;
			} 
		}
	}
    if(sum==0)
	{
		printf("No");
	}
    return 0;
}
