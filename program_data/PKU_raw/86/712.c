int main()
{
	int i,c,j,k,num[100],n,timess=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&c);
		for(j=0;j<c;j++)
		{
			scanf("%d",&num[j]);
		} 
		if((num[c-1]+3*c)<=60)
		{
			timess=60-c*3;
			printf("%d\n",timess);
		}
        else 
		{
			for(k=1;k<=c;k++)
			{
		        if((num[k-1]+3*k)<=63&&(num[k-1]+3*k)>60)
				{
					timess=num[k-1];
		            printf("%d\n",timess);
					break;
				}
		        else if((num[k-1]+3*k)>63) 
				{
					timess=60-(k-1)*3;
					printf("%d\n",timess);
					break;
				}
			}
		}
		timess=0;
	}
	return 0;
}
