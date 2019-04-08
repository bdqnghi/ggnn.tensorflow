int main()
{
	int x1=0,y1=0;
	scanf("%d %d",&x1,&y1);
	if(x1==0)
	   ;
	else
	{
	int a[101][101]={0}; 
	int b[101][101]={0};
	int c[101][101]={0};
	for(int i=0;i<x1;i++)
	    {
		for(int j=0;j<y1;j++)
		    scanf("%d",&a[i][j]);	
		}
	int x2=0,y2=0;
	scanf("%d %d",&x2,&y2);
	      for(int i=0;i<x2;i++)
	         {
		    for(int j=0;j<y2;j++)
		    scanf("%d",&b[i][j]);	
		     }
	for(int i=0;i<x1;i++)
	    {
		for(int j=0;j<y2;j++)
		    {
			for(int k=0;k<x2;k++)
			    c[i][j]+=a[i][k]*b[k][j];	
			} 
		}
	for(int i=0;i<x1;i++)
	    {
		printf("%d",c[i][0]);
		for(int j=1;j<y2;j++)
            printf(" %d",c[i][j]);
        printf("\n");
		} 
    }
}