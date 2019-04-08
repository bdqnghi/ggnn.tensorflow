void main()
{
	int x,y,(*p)[100],i,j,k;
	scanf("%d%d",&y,&x);
	p=(int (*)[100])malloc(100*y*sizeof(int));
    for(i=0;i<y;i++)
		for(j=0;j<x;j++)
			scanf("%d",*(p+i)+j);
	i=0;j=0;
		for(k=0;k<x*y;k++)
	{
			printf("%d\n",*(*(p+i)+j));
			i++;j--;
			if(j<0)
			{j=i+j+1;
			 i=0;
			}
			if(i>=y)
			{j=i+j+1;
			 i=0;
			}
			while(j>=x)
			{
				i++;
				j--;
			}
			

	}






	
}