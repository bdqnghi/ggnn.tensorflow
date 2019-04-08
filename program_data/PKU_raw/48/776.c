main()
{
	long a[9][9]={0},b[9][9]={0},m,n;
	scanf("%d %d",&m,&n);
	a[4][4]=b[4][4]=m;
	for(int i=1;i<=n;i++)
	{
	for(int j=4-i;j<=4+i;j++)
	    for(int k=4-i;k<=4+i;k++)
	    {
		    for(int g=j-1;g<=j+1;g++)
	            for(int h=k-1;h<=k+1;h++)
	               if(0<=g&&g<=8&&0<=h&&h<=8)  a[j][k]=a[j][k]+b[g][h];
	        }
	for(int p=0;p<9;p++)
	    for(int q=0;q<9;q++)
	        b[p][q]=a[p][q];
    }
    for(int x=0;x<9;x++)
		for(int y=0;y<9;y++)
		{
		    if(y==0) printf("%d",a[x][y]);
		    else if(y==8) printf(" %d\n",a[x][y]);
			else printf(" %d",a[x][y]);
		} 
}