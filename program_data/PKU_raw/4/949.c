/*
  Name: ?????????? 
  Copyright: 
  Author: 
  Date: 09/12/12 22:42
  Description: ????row?col??????array????array[0][0]????????????????????????? 
*/
int main()
{ 
    int row,col;
   int time=0;
   cin>>row>>col;
   int array[110][110]={0},*p=NULL;
   int i,j,k; 
   for( i = 0 ; i < row ; i++) 
       for( p=*(array+i);p <*(array+i)+col;p++)      
          cin>>*p;
      //    for( i = 0 ; i < row ; i++) 
//       for( j = 0 ; j < col ; j++)
//       cout<<array[i][j]<<endl; 
   for(k=0;k<=col+row;k++)
   {
       for(i=0;i<row;i++)
          for(j=0,p=*(array+i);p<*(array+i)+col;j++,p++) 
       { 
         if(i+j==k&&*p!=0) 
          cout<<*p<<endl;
           
       }                                    
   } 
    
    return 0;
}
