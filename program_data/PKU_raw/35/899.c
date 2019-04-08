
struct num
{
	int hang;
	int lie;
	int shu;
};

int main()
{
	int row,col;
	int i,j;
	int p,q;
	int a[8][8];
	int flag=0;
	struct num b[8],c[8]; //b->row max  c->col min
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
		p=a[i][0];
		for(j=0;j<col;j++)
		{
			if(a[i][j]>=p)
			{
				p=a[i][j];
				b[i].shu=p;
				b[i].hang=i;
				b[i].lie=j;
			}
		}
	}
	for(j=0;j<col;j++)
	{
		q=a[0][j];
		for(i=0;i<row;i++)
		{
           if(a[i][j]<=q)
		   {
			   q=a[i][j];
			   c[j].shu=q;
			   c[j].hang=i;
			   c[j].lie=j;
		   }
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		
			if(b[i].shu==c[j].shu)
			{
			   printf("%d+%d",b[i].hang,b[i].lie);
			   flag=1;
			   break;
			}
		}
	}
	if(flag==0)
		printf("No");
	return 0;
}