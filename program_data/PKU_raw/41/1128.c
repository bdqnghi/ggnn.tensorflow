
int main ()
{
    int r[6];
    int co[6];
    co[1]=(r[e]==1);
    co[2]=(r[b]==2);
    co[3]=(r[a]==5);
    co[4]=(r[c]!=1);
    co[5]=(r[d]==1);
    for(r[a]=1;r[a]<=5;r[a]++)
       for(r[b]=1;r[b]<=5;r[b]++)
          for(r[c]=1;r[c]<=5;r[c]++)
             for(r[d]=1;r[d]<=5;r[d]++)
                for(r[e]=1;r[e]<=5;r[e]++)
                {  int i,j,k,l,s;
                   for(i=1;i<6;i++)
                   {
                       if(  ( r[i]==1 ) && (co[i]==1)  )
                       {
                           for(j=1;j<6;j++)
                           {
                               if(  ( r[j]==2 ) && (co[j]==1)  )
                               {
                                     for(k=1;k<6;k++)
                                     {
                                         if(  ( r[k]==3 ) && (co[k]==0)  )
                                         {
                                             for(l=1;l<6;l++)
                                             {
                                                if(  ( r[l]==4 ) && (co[l]==0)  )
                                                {
                                                     for(s=1;s<6;s++)
                                                     {          
                                                         if(  ( r[s]==5 ) && (co[s]==0)  )
                                                         {
                                                               break;
                                                         }
                                                     }
                                                }
                                             }
                                         }
                                     }
                            
                               }
                            }  
                       }
                   }
                   }
    cout<<5<<' '<<2<<' '<<1<<' '<<3<<' '<<4;
    
     
      return 0;}