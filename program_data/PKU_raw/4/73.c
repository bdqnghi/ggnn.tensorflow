int *matrix;
int *matrix_end;
int row,col;

int* next(int* p)
{
	printf("%d\n",*p);
	return p+col-1;
}


void main()
{
	int i,j,k;
	scanf("%d %d",&row,&col);
	matrix = malloc(row*col*sizeof(int));
	matrix_end = matrix+row*col-1;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&matrix[i*col+j]);
		}
	}
	
	int *iter;
	int *iter_;
	iter = matrix;
	for(iter = matrix; iter< matrix+col;iter++)
	{
		int a = iter-matrix+1;
		if(row<a)a = row;
		iter_ = iter;
		while(a--)
		{
			iter_ = next(iter_);
		}
	}
	for(iter = matrix+2*col-1;iter<=matrix_end;iter = iter+col)
	{
		int a = (matrix_end-iter)/col+1;
		if(col<a)a = col;
		iter_ = iter;
		while(a--)
		{
			iter_ = next(iter_);
		}
	}
}



