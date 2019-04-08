main()
{
int row,col,n,sum,a,b,c,d,s;
long pic[100][100];
scanf("%d\n",&n);

for(row=0;row<n;row++){
  for(col=0;col<n;col++)
  {scanf("%d",&pic[row][col]);}
  }


sum=0;
for(row=0;row<n;row++){
  for(col=0;col<n;col++)
		{if ((pic[row][col]==0)
		   &&(pic[row-1][col-1]==255)
		   &&(pic[row-1][col]==255)
		   &&(pic[row][col-1]==255))
			{a=row;
             b=col;}				
		}
  }


for(row=n-1;row>=0;row--){
  for(col=n-1;col>=0;col--)
		{if ((pic[row][col]==0)
		   &&(pic[row+1][col+1]==255)
		   &&(pic[row+1][col]==255)
		   &&(pic[row][col+1]==255))
			{c=row;
             d=col;}				
		}
  }

s=(c-a-1)*(d-b-1);
printf("%d",s);

return 0;
}