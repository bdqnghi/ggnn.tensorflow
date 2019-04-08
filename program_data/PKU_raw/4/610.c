int main()
{
 int row,col,i,j,k,h;
 cin>>row>>col;
 cout<<endl;
 int a[row][col];
 for(i=0;i<=row-1;i++)
 {for(j=0;j<=col-1;j++)
  {cin>>a[i][j];}
 }
 if(row!=1&&col!=1)
 {for(j=0;j<=col-1;j++)
  {k=0;
   h=j;
   while(k<=row-1&&h>=0)
   {cout<<a[k][h]<<endl;
    k=k+1;
    h=h-1;
   }
  }
  for(i=1;i<=row-1;i++)
  {k=col-1;
   h=i;
   while(h<=row-1&&k>=0)
   {cout<<a[h][k]<<endl;
    h=h+1;
    k=k-1;
  }
 }
}
 if(row==1&&col!=1)
 {for(i=0;i<=col-1;i++)
  {cout<<a[0][i]<<endl;}
 }
 if(col==1&&row!=1)
 {for(i=0;i<=row-1;i++)
  {cout<<a[i][0]<<endl;}
 }
 if(row==1&&col==1)
 {cout<<a[0][0]<<endl;}
 return 0;
}

 
 
 
