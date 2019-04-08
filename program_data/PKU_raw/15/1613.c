int main()
{
	int s,start1,start2,end1,end2,n,sz[100][100];
    scanf("%d",&n);
	int flag = 0;
	start1=0;
	start2=0;
    end1=0;
	end2=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			scanf("%d",&sz[i][j]);
			if(sz[i][j]==0 && flag == 0)
			{
				flag = 1;
				start1=i+1;
				start2=j+1; 
			}
			if(sz[i][j]==0)
			{
				end1=i;
				end2=j;
			}
		}
	   //printf("%d %d %d %d\n",start1,start2,end1,end2);
	   s=(end1-start1)*(end2-start2);
       printf("%d\n",s);
       return 0;
}