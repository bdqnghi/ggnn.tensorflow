int mark=1, n, b[1000]={0}, c[1000]={0}, max=0;	
char a[1000];
int work(int i, int j)
{
	int k=0;
	while(a[i+k]==a[j+k]) 
	{
      if (k<n-1)
		  k++;
	  else
		  return 1;
	}
	return 0;
	
}
int main()
{
	int i, j;
	scanf("%d%s", &n,a);
	for (i=0; i<=strlen(a)-n; i++)
	{
		mark=1;
		for(j=i+1; j<=strlen(a)-n; j++)
		{
			if (work(i, j)==1 && b[j]!=1)
			{
				mark+=1;
			
				b[j]=1;
			}
			
		}
			if (mark>max)
				{
					max=mark;
				}


	}
	if (max>1)
	printf("%d\n", max);
    
		for (i=0; i<=strlen(a)-n; i++)
	{
		mark=1;
		for(j=i+1; j<=strlen(a)-n; j++)
		{
			if (work(i, j)==1 && c[j]!=1)
			{
				mark+=1;
				c[j]=1;
			}
			
		}
			if (mark==max)
			{
				if (mark>1)
				{
				for (int k=0; k<n; k++)
				{
				printf("%c" , a[i+k]);
				}
				printf("\n");
				}
			
			}
		
	}
		if (max==1)
				printf("NO");
		return 0;
}
