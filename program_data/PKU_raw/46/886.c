int main()
{
	int row,col,i,j,a[100][100],xxrow,sxrow,xxcol,sxcol;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	}
	xxrow=0;
	sxrow=row-1;
	xxcol=0;
	sxcol=col-1;
    for(;1;){
		if(xxrow==sxrow&&xxcol<=sxcol){
			for(i=xxcol;i<=sxcol;i++)
				printf("%d\n",a[xxrow][i]);
			break;
		}
		else if(xxcol==sxcol&&xxrow<sxrow){
			for(i=xxrow;i<=sxrow;i++)
				printf("%d\n",a[i][xxcol]);
			break;
		}
		if(xxcol>sxcol||xxrow>sxrow)
			break;
		for(i=xxcol;i<=sxcol-1;i++)
			printf("%d\n",a[xxrow][i]);
		for(i=xxrow;i<=sxrow-1;i++)
			printf("%d\n",a[i][sxcol]);
		for(i=sxcol;i>=xxcol+1;i--)
			printf("%d\n",a[sxrow][i]);
		for(i=sxrow;i>=xxrow+1;i--)
			printf("%d\n",a[i][xxcol]);
		xxrow++;
		xxcol++;
		sxrow--;
		sxcol--;
	}
	return 0;
}