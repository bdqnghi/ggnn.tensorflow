int main()
{
	int i,j,m,n,a,s,t,p,k,r;
	int an[8][8];
	scanf("%d,%d\n",&m,&n);
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++) scanf("%d",&an[i][j]);
	}
    s=-1;t=-1;

    for (i=0;i<m;i++)
	{
		a=i;
		k=an[a][0];
		for(j=0;j<n;j++) 
		{
			if(an[a][j]>k)	k=an[a][j];
			
		}
		
		for(j=0;j<n;j++) 
		{
			p=-1;
			if(an[a][j]==k)
			{	p=k;
				for(r=0;r<m;r++)
				{
				
					if(an[r][j]<p)  p=an[r][j];
					
				} 
				if(p==an[a][j])
				{   
					s=a;
					t=j;
					printf("%d+%d\n",s,t);
				}
			}
		}
		
	}
    if(s==-1) printf("No");
	return 0;
}
