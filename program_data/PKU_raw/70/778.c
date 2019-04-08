int main()
{
     int n,i,k;
     double max=0.0,dis;
     cin>>n;
     double a[n][2];
     for (i=0;i<n;i++)
         {cin>>a[i][0]>>a[i][1];
         cout<<endl;}
     for(i=0;i<n;i++)
         for(k=i+1;k<n;k++)
               {dis=sqrt((a[i][0]-a[k][0])*(a[i][0]-a[k][0])+(a[i][1]-a[k][1])*(a[i][1]-a[k][1]));
                max=(max>dis?max:dis);
               }
     printf("%.4f\n", max);
     return 0;    
}
