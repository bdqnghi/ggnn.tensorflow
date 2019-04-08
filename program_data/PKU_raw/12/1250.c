int main()
{int a[100][15],i,j,k,l;
for(i=0; ;i++)
 {cin>>a[i][0];
   if(a[i][0]==-1) break;
  else
     {int n=0;
      for(j=1; ;j++)
       {cin>>a[i][j];
         if(a[i][j]==0) break;}
         for(k=0;k<=j-1;k++)
          for(l=0;l<=j-1;l++)
            if(a[i][k]==2*a[i][l]) n=n+1;
        
       
     cout<<n<<endl;}
   }
return 0;

}
           
          
  