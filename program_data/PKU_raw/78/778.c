int main()//????????????????
{
    int z,q,s,l,i;//??? 
    char mark[51];//???? 
    for(i=0;i<=50;i++)mark[i]=0; //??? 
    for(z=10;z<=50;z+=10)//???? 
       for(q=10;q<=50;q+=10)
       {
                            if(q==z)continue;//?????????? 
                            for(s=10;s<=50;s+=10)
                            {
                                                  if(s==q||s==z)continue;
                                                  for(l=10;l<=50;l++)
                                                  {
                                                                     if(l==z||l==q||l==s)continue;
                                                                     if((z+q==s+l)&&(z+l>=s+q)&&(z+s<q))//???? 
                                                                     {
                                                                                                         mark[z]='z';
                                                                                                         mark[q]='q';
                                                                                                         mark[s]='s';
                                                                                                         mark[l]='l';
                                                                                                         for(i=50;i>=10;i=i-10)
                                                                                                         {
                                                                                                                               if(mark[i]!=0)
                                                                                                                               cout<<mark[i]<<' '<<i<<endl;//??????
                                                                                                         }
                                                                     }
                                                  }
                            }
       }
       getchar();getchar();
       return 0;
} 
                                                                                                          
