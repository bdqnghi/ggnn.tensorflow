
int main()
{
  int a[5][5];
  int b[5][5];   
  int c[5][5];  
  int d[5][5];
  int i,j;      
  int sum=0;
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
    scanf("%d",&a[i][j]);                 
    }         
  } 
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
         b[i][j]=a[i][j];
         c[i][j]=j; 
         d[i][j]=i;                
    }
  } 
  for(i=0;i<=4;i++)
  {
    for(j=0;j<=3;j++)
    {
      if(b[i][j]>=b[i][j+1])
      {
        int e=b[i][j];
        b[i][j]=b[i][j+1];
        b[i][j+1]=e;
        int f=c[i][j];
        c[i][j]=c[i][j+1];
        c[i][j+1]=f;                      
      }                 
    }               
  } 
  for(i=0;i<=4;i++)
  {
	  j=c[i][4];
	  for(int k=0;k<=4;k++)
	  {
		  if(k<4)
		  {
		    if(a[k][j]<b[i][4])
			{
			  break;
			}
		  }
		  if(k==4)
		  {
		    if(a[k][j]>=b[i][4])
			{
			  printf("%d %d %d\n",1+d[i][4],1+c[i][4],b[i][4]);
			  sum=sum+1;
			}
		  }
	  }
  }
  if(sum==0)
  {
    printf("not found");
  }
return 0;
}