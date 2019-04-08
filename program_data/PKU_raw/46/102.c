int main()
{
	int n[ROW][COL],row,col,i,j,begin;
    scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++) scanf("%d",&n[i][j]);
	}
    for(begin=0;;begin++)
		{
			if(begin>=(col-begin)) break;
			for(i=begin,j=begin;j<(col-begin);j++) printf("%d\n",n[i][j]);
		    if((begin+1)>=(row-begin)) break;
		    else for(i=(begin+1),j=(col-begin-1);i<(row-begin);i++) printf("%d\n",n[i][j]);
	        if((col-begin-2)<begin) break;
		    else for(i=(row-begin-1),j=(col-begin-2);j>(begin-1);j--) printf("%d\n",n[i][j]);
            if((row-begin-2)<(begin+1)) break;
		    else for(i=(row-begin-2),j=begin;i>begin;i--) printf("%d\n",n[i][j]);
		
	}
}