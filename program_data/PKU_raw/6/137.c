int main()
{
	int k,row,q,col,i,j,*a,*num;
	scanf("%d",&k);
    num=(int*)malloc(k*sizeof(int));
	for(q=0;q<k;q++)
	{
		int sum=0;
		scanf("%d %d",&row,&col);
		a=(int*)malloc(row*col*sizeof(int));
		for(i=0;i<row;i++)
			for(j=0;j<col;j++)
			{
				scanf("%d",a+i*col+j);
				if(i==0||j==0||i==row-1||j==col-1)sum=sum+*(a+i*col+j);
			}
        *(num+q)=sum;
		free(a);
	}
    for(q=0;q<k;q++)
		printf("%d\n",*(num+q));
	free(num);
}




