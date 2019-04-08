int main()
{
  int a[5][5];
  int i,j;
  int status,col,row,judge;
  int cmp;
  col=row=status=cmp=judge=0;
  for(i=0;i<5;i++)
  {
	  for(j=0;j<5;j++)
	  {
		  scanf("%d",&a[i][j]);
	  }
  }
  for(i=0;i<5;i++)
  {

	  for(j=0;j<5 ;j++)
	  {
		 if(a[i][j]>cmp)
		 {
			 cmp=a[i][j];
			 col=i;
			 row=j;
		 }
		 if(j==4)
		 {
			 status=1;
		 }
	  }
		 int p;
		 for(p=0;p<5;p++)
		 {
			 if(a[p][row]>=cmp)
				 continue;
			 else
			 {status=0;
			 break;
			 }
		 }
		 if(status==1)
		 {
			 printf("%d %d %d",col+1,row+1,a[col][row]);
			 status=0;
			 judge=1;
			
		 }
		  cmp=0;
  }
	 if(judge==0)
	 printf("not found");
	 return 0;
  }









