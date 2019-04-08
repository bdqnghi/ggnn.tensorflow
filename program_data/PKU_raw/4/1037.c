void main()
{int col,row,i,j,k,t=0,a[101][101]={0};
int *p;
scanf("%d%d",&row,&col);
for(i=0;i<row;i++)
	for(j=0;j<col;j++)
		scanf("%d",&a[i][j]);
p=(int*)malloc(sizeof(int)*row*col);

	for(i=0;i<col;i++)
		for(k=0,j=i;j>=0&&k<row;k++,j--)
			{*(p+t)=a[k][j];
				t++;}
	for(i=1;i<row;i++)
		for(k=i,j=col-1;k<row&&j>=0;j--,k++)
			{*(p+t)=a[k][j];
				t++;}
for(i=0;i<row*col;i++)
	printf("%d\n",*(p+i));
}



 
