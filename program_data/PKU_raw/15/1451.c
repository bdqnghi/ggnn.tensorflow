int main()
{
    int n,shu[1000][1000],i,k,heng=0,s=0,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    for(k=0;k<n;k++)
                    {
                                    scanf("%d",&shu[i][k]);
                     
                    }               
                    }
     for(i=0;i<n;i++)
     {
                     for(k=0;k<n;k++)
                     {
                                     if(shu[i][k]==0)  
                                     {
                                                       heng+=1;
                                                       }
                                                       }
                      if(heng!=0)
                      {
                                 break;
                                 }
                                 }
     for(k=0;k<n;k++)
     {
                     for(i=0;i<n;i++)
                     {
                                     if(shu[i][k]==0)
                                     {
                                                     s+=1;
                                                     }
                                                     }
                     if(s!=0)
                     {
                               break;
                               }
                               }
    count=(s-2)*(heng-2);
    printf("%d",count);
    return 0;
}                           
                                                               
                                                                                                                                     
                                    
