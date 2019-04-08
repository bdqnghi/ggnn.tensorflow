int main()
{
   int row=0,col=0,k=0;
   cin>>row>>col;
   int i=0,j=0,s[row][col];
   for(i=0;i<=row-1;i++)//?? 
   {
      for(j=0;j<=col-1;j++)
      {
         cin>>s[i][j];                    
      }                     
   } 
   for(i=0;i<=col-1;i++)//????????????? 
   {
             j=0;
             k=i;
             do
             {
              cout<<s[j][k]<<endl;
              j++;  
              k--;                                     
             }while((j<=row-1)&&(k>=0));             
   }
   for(i=1;i<=row-1;i++)//?????????????
   {
                  j=col-1;
                  k=i;
                  do
                  {
                      cout<<s[k][j]<<endl;
                      k++;
                      j--;
                  }while((k<=row-1)&&(j>=0));      
   } 
return 0;
}
