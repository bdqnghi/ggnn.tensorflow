int main()
{
	int n,m,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int*sum=(int*)malloc(sizeof(int)*20);
		scanf("%d",&m);
		if(m==0) 
		{
			printf("60\n");
			continue;
		}
		for(j=0;j<m;j++)
		{
			scanf("%d",&sum[j]);
			sum[j]+=3*(j+1);
		}
		for(j=m-1;j>=0;j--)
		{
		    if(sum[j]>=63) continue;
			else if(sum[j]<=60) 
			{
				printf("%d\n",60-(j+1)*3);
				break;
			}
		    else if(sum[j]==61) 
			{
				printf("%d\n",58-j*3);
				break;
			}
		    else if(sum[j]==62) 
			{
				printf("%d\n",59-j*3);
				break;
			}
		}
		free(sum);
	}
	return 0;
}
