int main() {
	int number[5][5];
	int i=0;
	int j=0;
	int y[5];
	int p=0;
	while(i<5)
	{
		scanf("%d %d %d %d %d/n", &number[i][0], &number[i][1], &number[i][2], &number[i][3], &number[i][4]);
		
		i++;
	}
	i=0;
	j=0;
	int hang[5];
	int lie[5];
	int x[5];
	while(i<5)
	{
		x[i]=number[i][0];
		while(j<5)
		{
			if(number[i][j]>=x[i])
			{
				hang[i]=i;
				lie[i]=j;
				x[i]=number[i][j];
			}
			j++;
		}
		i++;
		j=0;
	}
	i=0;
	j=0;
	
	j=lie[0];
	y[j]=number[0][j];
		while(i<5)
		{
		    if(number[i][j]<y[j])
			   {
				   y[j]=number[i][j];
			   }
			   i++;
		}
		if(x[0]==y[j])
		{
			printf("%d %d %d", (hang[0]+1),(lie[0]+1),x[0]);
		}
		else
			p++;


	i=0;
	j=0;
    j=lie[1];
	y[j]=number[1][j];
		while(i<5)
		{
		    if(number[i][j]<y[j])
			   {
				   y[j]=number[i][j];
			   }
			   i++;
		}
		if(x[1]==y[j])
		{
			printf("%d %d %d", (hang[1]+1),(lie[1]+1),x[1]);
		}
		else
			p++;

   i=0;
   j=0;
   j=lie[2];
	y[j]=number[2][j];
		while(i<5)
		{
		    if(number[i][j]<y[j])
			   {
				   y[j]=number[i][j];
			   }
			   i++;
		}
		if(x[2]==y[j])
		{
			printf("%d %d %d", (hang[2]+1),(lie[2]+1),x[2]);
		}
		else
			p++;

   i=0;
   j=0;
   j=lie[3];
	y[j]=number[3][j];
		while(i<5)
		{
		    if(number[i][j]<y[j])
			   {
				   y[j]=number[i][j];
			   }
			   i++;
		}
		if(x[3]==y[j])
		{
			printf("%d %d %d", (hang[3]+1),(lie[3]+1),x[3]);
		}
		else
			p++;

   i=0;
   j=0;
   j=lie[4];
	y[j]=number[4][j];
		while(i<5)
		{
		    if(number[i][j]<y[j])
			   {
				   y[j]=number[i][j];
			   }
			   i++;
		}
		if(x[4]==y[j])
		{
			printf("%d %d %d", (hang[4]+1),(lie[4]+1),x[4]);
		}
		else
			p++;
		if(p==5)
		{
			printf("not found");
		}

			return 0;
	}