int f(int n)
{
	int i,s=1;
	for(i=1;i<=n;i++)
	{
		s=s*2;
	}
	return s;
}
int main ( )
{
	int x,y,i,j,nx,ny;
	int x_row[10],y_row[10];
	scanf("%d %d\n",&x,&y);
	for(i=1;1;i++)
	{
		if(x<f(i))
			break;
	}
	nx=i;
	for(i=1;1;i++)
	{
		if(y<f(i))
			break;
	}
	ny=i;
	x_row[0]=x;
	y_row[0]=y;
	for(i=1;1;i++)
	{
		x_row[i]=f(nx-i-1)-1+(x_row[i-1]-f(nx-i)+1+(x_row[i-1]-f(nx-i)+1)%2)/2;
		if(x_row[i]==1)
			break;
	}
	for(i=1;1;i++)
	{
		y_row[i]=f(ny-i-1)-1+(y_row[i-1]-f(ny-i)+1+(y_row[i-1]-f(ny-i)+1)%2)/2;
		if(y_row[i]==1)
			break;
	}
	for(i=0;i<nx;i++)
	{
		for(j=0;j<ny;j++)
		{
			if(y_row[j]==x_row[i])
				break;
		}
		if(y_row[j]==x_row[i])
			break;
	}
	printf("%d\n",y_row[j]);
	return 0;
}