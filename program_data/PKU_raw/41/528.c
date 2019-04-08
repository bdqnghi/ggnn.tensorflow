int aa(int a,int b,int c,int d,int e)
{
    int p;
    if(e==1)
    p=1;
    else
    p=0; 
    return p; 
} 
int cc(int a,int b,int c,int d,int e) 
{
    int p;
    if(a==5)
    p=1;
    else
    p=0;
    return p; 
}
int dd(int a,int b,int c,int d,int e) 
{
    int p;
    if(c!=1)
    p=1;
    else
    p=0;
    return p; 
}
int ee(int a,int b,int c,int d,int e) 
{
    int p;
    if(d==1)
    p=1;
    else
    p=0;
    return p; 
}
main()
{
      int x,y,z,t,k;
      int m=0; 
      for(x=1;x<6;x++)
      {
                      for(y=1;y<6;y++)
                      {
                                    for(z=1;z<6;z++)
                                    {
                                                 for(t=1;t<6;t++)
                                                 {
                                                                 for(k=1;k<6;k++)
                                                                 {
                                                                             if((aa(x,y,z,t,k)==1)&&(cc(x,y,z,t,k)==0)&&(dd(x,y,z,t,k)==0)&&(ee(x,y,z,t,k)==0)&&(x==1||x==2))
                                                                             {
                                                                              if(x!=y&&x!=z&&x!=t&&x!=k&&y!=z&&y!=t&&y!=k&&z!=t&&k!=z&&k!=t&&(k!=2&&k!=3)&&(y==2))                                                                            
                                                                             printf("%d %d %d %d %d\n",x,y,z,t,k);}
                                                                             else if((cc(x,y,z,t,k)==1)&&(aa(x,y,z,t,k)==0)&&(dd(x,y,z,t,k)==0)&&(ee(x,y,z,t,k)==0)&&(z==1||z==2))
                                                                             {
                                                                              if(x!=y&&x!=z&&x!=t&&x!=k&&y!=z&&y!=t&&y!=k&&z!=t&&k!=z&&k!=t&&(k!=2&&k!=3)&&(y==2))                                                                            
                                                                             printf("%d %d %d %d %d\n",x,y,z,t,k);}
                                                                             else if((dd(x,y,z,t,k)==1)&&(aa(x,y,z,t,k)==0)&&(cc(x,y,z,t,k)==0)&&(ee(x,y,z,t,k)==0)&&(t==1||t==2))
                                                                             {
                                                                              if(x!=y&&x!=z&&x!=t&&x!=k&&y!=z&&y!=t&&y!=k&&z!=t&&k!=z&&k!=t&&(k!=2&&k!=3)&&(y==2))                                                                            
                                                                             printf("%d %d %d %d %d\n",x,y,z,t,k);}
                                                                             else if((ee(x,y,z,t,k)==1)&&(aa(x,y,z,t,k)==0)&&(cc(x,y,z,t,k)==0)&&(dd(x,y,z,t,k)==0)&&(k==1||k==2))
                                                                             {
                                                                              if(x!=y&&x!=z&&x!=t&&x!=k&&y!=z&&y!=t&&y!=k&&z!=t&&k!=z&&k!=t&&(k!=2&&k!=3)&&(y==2))                                                                            
                                                                             printf("%d %d %d %d %d\n",x,y,z,t,k);}
                                                                             
                                                                             
                                                                             
                                                                 }
                                                 }   
                                    }  
                      } 
      } 
      
      
} 
