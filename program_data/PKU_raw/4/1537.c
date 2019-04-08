void main()
{
	int r,c,*p[100],i,j,v;
	for(i=0;i<100;i++)
		p[i]=(int *)malloc(100*sizeof(int));
    scanf("%d %d\n",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",(p[i]+j));
	for(v=0;v<=r+c-2;v++)
	{
		for(i=0;i<=v;i++)
		{
			if(i<r)
			{
				j=v-i;
				if(j<c) printf("%d\n",*(p[i]+j));
			}
		}
	}
}
