main()
{
  int row,col,n,i,j,k,(*p)[100],a[100][100];
  scanf("%d %d",&row,&col);
  p=a;
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    { scanf("%d",*(p+i)+j);
    }
  }
  p=&a[0][0];
  for(k=0;k<row+col;k++)
  {
    for(i=0;i<=k;i++)
    {
	if(i<row&&k-i<col)
	{
	  printf("%d\n",*(*(p+i)+(k-i)));
	}
    }
  }
}