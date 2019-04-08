int main()
{
    int oushu,xiao,da,i,j,panduan; 
    cin>>oushu;
    for(xiao=3;xiao<=oushu/2;xiao++)
    {  
                                         panduan=0;
                                         da=oushu-xiao;
                                         for(i=2;i<xiao;i++)     
                                         {
                                                                     if(xiao%i==0)panduan++;//??????????? ??????panduan?? 
                                         }
                                         for(j=2;j<da;j++)     
                                         {
                                                                   if(da%j==0)panduan++;//?????????????????panduan?? 
                                         }
                                         if(panduan==0)cout<<xiao<<" "<<da<<endl;//???????????panduan????????? 
       
    }
cin.get();cin.get();cin.get();
return 0;
} 
