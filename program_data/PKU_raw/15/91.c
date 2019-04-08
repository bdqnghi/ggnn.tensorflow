int main()
{
	int y=0;
	int s;
	int i1,j1,i2,j2;
	int i,j;
	int n,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x);
			if(x==0&&y==0)
			{
				i1=i;
				j1=j;
				y++;
            }
			else if(x==0&&y!=0)
			{	
				i2=i;
				j2=j;

			}
		}

	}
        
	 s=(j1-j2+1)*(i1-i2+1);
     printf("%d",s);
	 return 0;
}
