int main()
{
      int row,col,i,j,d=0,count=0;
      int de[]={0,1,2,3};
      scanf("%d%d",&row,&col);
      int a[row][col],b[row][col];
      for(i=0;i<row;i++)
      {
              for(j=0;j<col;j++){scanf("%d",&a[i][j]);b[i][j]=1;}       
      }
      i=0;j=0;
      for(count=0;count<row*col;count++)
      {
                   printf("%d\n",a[i][j]);
                   b[i][j]=0;
                   switch(de[d])
                   {
                    case 0: j++;break;
                    case 1: i++;break;
                    case 2: j--;break;
                    case 3: i--;break;         
                   }
                   if(i<0||i>=row||j<0||j>=col||b[i][j]==0)
             {
                 switch(de[d])
                   {
                    case 0: j--;i++;break;
                    case 1: i--;j--;break;
                    case 2: j++;i--;break;
                    case 3: i++;j++;break;         
                   }
                 d=(d+1)%4;    
             }                       
      }
return 0;
}