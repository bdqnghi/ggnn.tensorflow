int jiaohuan (int m,int n) 
{   
	if ((m>-1)&&(m<5)&&(n>-1)&&(n<5))
	{
      
     return 1;
	 
	}
	else 
	{return 0;} 

}
int main(int argc, char* argv[])
{
    int i,j,m,n,p;
    int x[5][5];
    for (i=0;i<5;i++)
	 {
	   for (j=0;j<5;j++)
	   {
		scanf ("%d ",&x[i][j]);
			  
	   
	   }
	 
	 }
	scanf ("%d%d",&m,&n);
	if (jiaohuan (m,n)==1)
	{
    for (j=0;j<5;j++)
	  {
	  p=x[m][j];
	  x[m][j]=x[n][j];
      x[n][j]=p;
	 
	   
	  } 
	   for (i=0;i<5;i++)
	   {
	     for (j=0;j<5;j++)
		 {  
			 if (j==4) {printf ("%d\n",x[i][j]);}	
			 
			 else
			 {
		      printf ("%d ",x[i][j]);
			 }
		 }
	   }
	}
	else 
	{
		printf ("error");
	}
	return 0;
}
