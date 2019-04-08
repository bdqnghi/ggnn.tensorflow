int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int i,j;
	int a,c,b,d;
	int image[M][N];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&image[i][j]);
		}
	}
   for(i=0;i<n;i++)
   {
	   for(j=0;j<n;j++)
	   {
	      if(image[i][j]==0&&image[i][j-1]!=0&&image[i-1][j]!=0)
		  {
		       a=i;
		       b=j;
		  }
		  else if(image[i][j]==0&&image[i][j+1]!=0&&image[i+1][j]!=0)
		  {
			   c=i;
		       d=j;
		  }
	   }
}
	printf("%d",(c-a-1)*(d-b-1));
	return 0;
}