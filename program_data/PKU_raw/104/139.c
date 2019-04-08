void main()
{
	int x,i,y,j,k,l;
    int xn[15],yn[15];
	scanf("%d%d",&x,&y);
	for (i=0;x!=0;i++)
	{
		xn[i]=x;
		x=x/2;
	}
	k=i-1;
	for(i=0;y!=0;i++)
	{
		yn[i]=y;
		y=y/2;
	}
	l=i-1;
	if(xn[0]==yn[0])
		printf("%d",xn[0]);
	else
	{
	for(;;k--)
	{
		if(xn[k]!=yn[l])
		{
			j=k+1;
			break;
		}
		l--;
	}
	printf("%d",xn[j]);
	}



}