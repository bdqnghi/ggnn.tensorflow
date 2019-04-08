int main()
{
	int n,i,j;
	int x1=-1, y1=-1, x2=-1, y2=-1;
    int t[500][500];
	scanf("%d",&n);
	for(i = 0; i < n; i++) 
		for(j = 0; j < n; j++) 
			scanf("%d", &t[i][j]);
	for(i = 0; i < n; i++) 
	{
		for(j = 0; j < n; j++) 
		{
			if( t[i][j]== 0)  		
			{	
				x1 = j;
				y1 = i;
				break;
			}
		}
		if(x1!=-1)
		break;
	}
	for(i=n-1;i>0;i--)
	{	
		for(j=n-1;j>0;j--)
		{
			if(t[i][j]==0)
			{
				x2=j;
				y2=i;
				break;	
			}			
		}
		if(x2!=-1)
		break;
	}
	printf("%d\n", (x2 - x1 - 1) * (y2 - y1 - 1));
	return 0;
}

