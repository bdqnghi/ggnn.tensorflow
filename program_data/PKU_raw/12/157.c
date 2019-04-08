void main()
{
	int count=0,num[20][16],i,j,t;
	for(i=0;i<16;i++)
	{
		scanf("%d",&num[0][i]);
		if(num[0][i]==0)
			break;
	}

    for(i=1;i<20;i++)
	{
      if(num[i-1][0]!=-1)
	  {
       	for(j=0;j<16;j++)
		{
			scanf("%d",&num[i][j]);
			if(num[i][j]==0 || num[i][j]==-1)
			break;
		}
	  }
	  else break;
	}

	for(i=0;i<20;i++)
	{
      if(num[i][0]==-1)
          break;
      else 
	  {
       	for(j=0;j<16;j++)
		{
		  if(num[i][j]==0)
			break;
		  else
		  {
			for(t=0;t<16;t++)
			{
		      if(num[i][t]==0)
		    	break;
			  else
			  {
				  if(num[i][t]==2*num[i][j])
			       count++;
			  }
			}
		  }
		}

        printf("%d\n",count);
		count=0;
	  }
	}	
}
