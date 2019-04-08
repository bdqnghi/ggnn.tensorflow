int array[10][10],max[10],min[10];
int i;
int main()
{
	int Row,Col,f=-1,row,col; 
    scanf("%d,%d",&Row,&Col);
    for(row=0;row<Row;row++)
 {
     for(col=0;col<Col;col++)
	 {
         scanf("%d",&array[row][col]);
	 }
} 




    for(row=0;row<Row;row++)
	{  
		max[row]=0;
       for( i=1;i<Col;i++)
	   {
            if(array[row][max[row]]<array[row][i])
			{
              max[row]=i;
			}
	   
	   }
	}




    for(col=0;col<Col;col++)
	{
		  min[col]=0;
          for( i=0;i<Row;i++)
		  {
               if(array[min[col]][col]>array[i][col])
			   {
                   min[col]=i;
			   }
		  }
		  
	}




  for(row=0;row<Row;row++)
  {
       if(min[max[row]]==row)
	   {
          printf("%d+%d",row,max[row]);
           f=1;
          break;
	   }
  }
       if(f==-1)
    {
       printf("No");
    }
    return 0;
 }