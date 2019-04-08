int main()
{
	int row,col,i,j,I,J=0,max,min,a[8][8],wzy=1,rrw=0;
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<row;i++)
		{
			max=a[i][0];
			for(j=0;j<col;j++)
			{
				if(max<a[i][j])
				{
					max=a[i][j];
					J=j;
				}
			}
			min=a[i][J];
			for(I=0;I<row;I++)
			{
				if(min>a[I][J])
				{
				  wzy=0;
					break;
				}
			}
			if(wzy==1)
			{
				printf("%d+%d",i,J);
				rrw++;
			}
			wzy=1;
			J=0;
		} 
		if(rrw==0)
		{
			printf("No");
		}
	
	return 0;
}


