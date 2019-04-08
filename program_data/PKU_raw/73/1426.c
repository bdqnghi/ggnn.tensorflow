int main()
{int h[5][5],m,q,n=0;
for(int i=0;i<=4;i++)
  {for(int j=0;j<=4;j++)
  {
	scanf("%d",&(h[i][j]));}
  }

for(int x=0;x<=4;x++)
  {
	 for(int y=0;y<=4;y++)
     {
	    if((h[x][y]>=h[x][1])&&(h[x][y]>=h[x][2])&&(h[x][y]>=h[x][0])&&(h[x][y]>=h[x][3])&&(h[x][y]>=h[x][4]))
          {
			if((h[x][y]<=h[0][y])&&(h[x][y]<=h[1][y])&&(h[x][y]<=h[2][y])&&(h[x][y]<=h[3][y])&&(h[x][y]<=h[4][y]))
	        {n++;printf("%d %d %d",x+1,y+1,h[x][y]);}
		   }
      }	
  }
 if(n==0){printf("not found");} 

return 0;
}
