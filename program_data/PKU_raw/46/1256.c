	//#define s 100
int main(){
	int row ,col;
	int ew[100][100];
	int a,b,p,q;
	int i,j;
	int e,f;
	int m,n;
	int min=0;
	scanf("%d%d",&row,&col);
	e=row/2;
	f=col/2;
	for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=col-1;j++)
		{
			scanf("%d",&ew[i][j]);
		}
	}
	if(row%2==0&&col%2==0)
	{
		if(e>f)
		{
			min=f;
		}
		if(e<=f)
		{
			min=e;
		}
	}
	if(row%2==1&&col%2==1){
		if(e+1>f+1)
		{
			min=f+1;
		}
		if(e+1<=f+1)
		{
			min=e+1;
		}
	}
	
	
	if(row%2==1&&col%2==0)
	{
		if(e+1>f)
		{
			min=f;
		}
		if(e+1<=f)
		{
			min=e+1;
		}
	}
	if(row%2==0&&col%2==1)
	{
		if(e>f+1)
		{
			min=f+1;
		}
		if(e<=f+1)
		{
			min=e;
		}
	}
	if((row%2==0&&col%2==0)||((row%2==1&&col%2==0)&&(e+1>f))||((row%2==0&&col%2==1)&&(f+1>e)))
	{	
		
		
		
		for(i=0;i<=min-1;i++)
		{
			for(a=i;a<=col-i-2;a++)
			{
				printf("%d\n",ew[i][a]);
			}
			for(b=i;b<=row-i-2;b++)
			{
				printf("%d\n",ew[b][col-1-i]);
			}
			for(p=col-i-1;p>=i+1;p--)
			{
				printf("%d\n",ew[row-i-1][p]);
			}for(q=row-1-i;q>=i+1;q--)
			{
				printf("%d\n",ew[q][i]);
			}
			
		}
	}
	
	if( ((col%2==1)&&(row%2==0)&&(f+1<=e)) || ((col%2==1)&&(row%2==1)&&(f+1<=e+1)))
	{
		
		
		for(i=0;i<=min-2;i++)
		{
			for(a=i;a<=col-i-2;a++)
			{
				printf("%d\n",ew[i][a]);
			}
			for(b=i;b<=row-i-2;b++)
			{
				printf("%d\n",ew[b][col-1-i]);
			}
			for(p=col-i-1;p>=i+1;p--)
			{
				printf("%d\n",ew[row-i-1][p]);
			}for(q=row-1-i;q>=i+1;q--)
			{
				printf("%d\n",ew[q][i]);
			}
			
		}
		
		
		for(m=min-1;m<=row-min;m++)
		{
			printf("%d\n",ew[m][f]);
		}
	}
	
	if(   ((row%2==1)&&(col%2==0)&&(e+1<=f))   ||    (  (row%2==1)     &&  (col%2==1) && (e+1<f+1) )    )
	{
		for(i=0;i<=min-2;i++)
		{
			for(a=i;a<=col-i-2;a++)
			{
				printf("%d\n",ew[i][a]);
			}
			for(b=i;b<=row-i-2;b++)
			{
				printf("%d\n",ew[b][col-1-i]);
			}
			for(p=col-i-1;p>=i+1;p--)
			{
				printf("%d\n",ew[row-i-1][p]);
			}for(q=row-1-i;q>=i+1;q--)
			{
				printf("%d\n",ew[q][i]);
			}
			
		}
		for(n=min-1;n<=col-min;n++)
		{
			printf("%d\n",ew[e][n]);
		}
	}
				
				
				
				return 0;
				}
	
