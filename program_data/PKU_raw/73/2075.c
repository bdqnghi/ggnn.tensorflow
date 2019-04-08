int main()
{
    int a[5][5],max[5]={-110,-110,-110,-110,-110},min[5]={100000,1100000,1100000,1100000,1100000},sum=0,p[5],q[5],x[5],y[5];
    int i=0,j=0;
            for(i=0;i<=4;i++)
       for(j=0;j<=4;j++)
  cin>>a[i][j];
         
       
     for(i=0;i<=4;i++)
       for(j=0;j<=4;j++)
         if(a[i][j]>max[i])
            max[i]=a[i][j];
         else  continue;
         
       
       
     for(i=0;i<=4;i++)
       for(j=0;j<=4;j++)
         if(max[i]==a[i][j])
        {  p[i]=i;q[i]=j;break;}
          else continue; 
          
        
     
          
     
     for(j=0;j<=4;j++)
      for(i=0;i<=4;i++)
         if(min[j]>a[i][j])
           min[j]=a[i][j];
         else continue;
        
          
          
     for(j=0;j<=4;j++)
       for(i=0;i<=4;i++)
         if(min[j]==a[i][j])
          { x[j]=i;y[j]=j;}
          else continue; 
 
         
     for(i=0;i<=4;i++)
      for(j=0;j<=4;j++)
        if((max[i]==min[j])&&(p[i]==x[j])&&(q[i]==y[j])) 
         cout<<p[i]+1<<" "<<q[i]+1<<" "<<max[i];
        else sum=sum+1;
        
     if(sum==25)
      cout<<"not found"<<endl;
           return 0;
      }
      
      
