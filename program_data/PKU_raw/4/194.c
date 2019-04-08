int main(int argc, char* argv[])
{
	int r,c,i,j,s;
	scanf ("%d%d",&r,&c);
	int x[100][100];
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
		scanf ("%d",&x[i][j]);
		
		}
	}
    s=0;
	while (s<=r+c-2)
	{
	 for (i=0;i<r;i++)
	 {
	  for (j=0;j<c;j++)
	  {
	  if (i+j==s)
	  {
	  printf ("%d\n",x[i][j]);
	  
	  }
	  
	  
	  }
	 
	 
	 }
	
	s++;
	}
   
	
	
	
	
	return 0;
}
