int main()
{
		int an[8][8],i,j,m,n,s,bb[8],cc[8],b,c,B[8];
		char q;
		scanf("%d%c%d",&m,&q,&n);
      for(i=0;i<m;i++)
	  {
		  for(j=0;j<n;j++)
		  {
			  scanf("%d",&an[i][j]);
		  }
	  }
		for(i=0,b=0;i<m;i++,b++)
		{ 
			s=an[i][0];
			B[b]=0;
			for(j=1;j<n;j++)
			{
				if(s<an[i][j])
				{
					s=an[i][j];
					B[b]=j;
				}
			}

	       bb[b]=s;
		   
		}

	for(i=0,c=0;i<n;i++,c++)
		{ 
			s=an[0][i];
			for(j=1;j<m;j++)
			{
				if(s>an[j][i])
				{
					s=an[j][i];
				}
			}
			cc[c]=s;
	}
			for(i=0;i<m-1;i++)
			{
				if(bb[i]==cc[B[i]])
				{
					printf("%d+%d",i,B[i]);
					break;
				}
			}
			if(i==m-1)
		{  

	if(bb[m-1]==cc[B[m-1]])
			{

	printf("%d+%d",m-1,B[m-1]);
			}
			else
			{
				printf("No");
				
			}
		}
			return 0;
}

		

