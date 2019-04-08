int main()
{
    int z,q,s,l,pan[4],i,m;//q,z,s,l??????????pan????????
    char rank[60]; //rank??????
    for(z=10;z<=50;z=z+10)
    { 
       for(q=10;q<=50;q=q+10)
       { 
         if (z==q) continue;//?????? 
            for(s=10;s<=50;s=s+10)
            { 
               if ((z==s)||(q==s)) continue;
                  for(l=10;l<=50;l=l+10)
                    {
                                        if ((z==l)||(q==l)||(s==l)) continue;
                                        pan[1]=((z+q)==(s+l));
                                        pan[2]=((z+l)>(s+q));
                                        pan[3]=((z+s)<q);
                                        if (pan[1]+pan[2]+pan[3]==3)//????????3 
                                        {
                                              m=150-q-s-l-z;
                                              rank[z]='z';
                                              rank[q]='q';
                                              rank[s]='s';
                                              rank[l]='l';
                                        }
                    }
            }
       }
    }
     for(i=50;i>m;i=i-10) cout<<rank[i]<<" "<<i<<endl;
     for(i=m-10;i>=10;i=i-10) cout<<rank[i]<<" "<<i<<endl;
    return 0;
}