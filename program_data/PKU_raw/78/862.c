int main()
{
    int z,q,s,l;
    char a[6]={'0','0','0','0','0','0'};           //??????
    for(z=1;z<=5;z++)   //?1234??10 20 30 40
         for(q=1;q<=5;q++)
              if(z==q)continue;
              else for(s=1;s<=5;s++)
                  if(z==s||q==s)continue;
                  else for(l=1;l<=5;l++)
                                           //?? ???
                         if(((z+q)==(s+l))&&((z+l)>(s+q))&&(z+s<q))
                             {a[z]='z';
                              a[q]='q';
                              a[s]='s';
                              a[l]='l';
                              for(int i=5;i>=1;i--)
                                   if(a[i]!='0')
                                      cout<<a[i]<<" "<<i*10<<endl;}
    return 0;
}
                 