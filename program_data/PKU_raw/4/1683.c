void main()
{
    int i,j,k,hang,lie,(*a)[100];
	a=(int (*)[100])malloc(100*100*sizeof(int));
    scanf("%d %d",&hang,&lie);
	for (i=0;i<hang;i++)
	{
	    for (j=0;j<lie;j++)
		{
		    scanf("%d",&*(*(a+i)+j));
		}
	}
	if (hang<=lie)
	{
	    for (j=0;j<hang;j++)
		{
		    for (i=j,k=0;i!=-1;i--,k++)
			{
			    printf("%d\n",*(*(a+k)+i));
			}
		}
		for (j=hang;j<lie;j++)
		{
		    for (i=j,k=0;k!=hang;i--,k++)
			{
				printf("%d\n",*(*(a+k)+i));
			}
		}
		for (j=1;j<hang;j++)
		{
		    for (k=j,i=lie-1;k<hang;k++,i--)
			{
			    printf("%d\n",*(*(a+k)+i));
			}
		}
	}
	else
	{
	        for (j=0;j<lie;j++)
			{
		        for (i=j,k=0;i>=0;i--,k++)
				{
			        printf("%d\n",*(*(a+k)+i));
				}
			}
			
			for (j=lie;j<hang;j++)
			{
			    for (i=lie-1,k=j-lie+1;i>=0;i--,k++)
				{
				printf("%d\n",*(*(a+k)+i));
				}
			}
            
			for (j=hang-lie+1;j<hang;j++)
			{
		            for (k=j,i=lie-1;k<hang;k++,i--)
			     {
			      printf("%d\n",*(*(a+k)+i));
			    }
			}
	}
}
