/*1 4 3 2 9 7 18 22 0
2 4 8 10 0
7 5 11 13 1 3 0
-1
*/





int main()
{
	int a[100];
	int i=1,count=0;
	scanf("%d",&a[0]);
	while (a[i-1]!=0)
	{
		scanf("%d",&a[i]);
		i++;
	}
	i=i-2;
	while (a[0]!=-1)
	{
		count=0;
		int j,k=0;
		for(j=0;j<i;j++)
		{
			for(k=j+1;k<i;k++)
			{
				if(a[k]==2*a[j]||a[j]==2*a[k])
				{
					count++;
				}
			}
		}
		printf("%d\n",count);
		scanf("%d",&a[0]);
		if(a[0]==-1)
		{
			break;
		}
		i=1;
	   while (a[i-1]!=0)
	   {
		scanf("%d",&a[i]);
		i++;
	   }
	    i=i-1;
		
	}
	return 0;
	
}
	
