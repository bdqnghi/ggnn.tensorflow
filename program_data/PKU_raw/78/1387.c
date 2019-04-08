int main()
{
   int z,q,s,l,k,a[4],i,j,m;
   char b[4]={'z','q','s','l'},w;
   for(z=10;z<50;z=z+10)
   {
                        for(q=10;q<50;q=q+10)
                        {
                                            if(z==q)continue;
                                            for(s=10;s<50;s=s+10)
                                           {if(z==s||q==s)continue;
                                           for(l=10;l<50;l=l+10)
                                          if(z==l||q==l||s==l)continue;
                                           if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
                                           {a[0]=z;
                                           a[1]=q;
                                           a[2]=s;
                                           a[3]=l;
                                                                             
                                                                             
                                           for(i=0;i<3;i++)
                                           {
                                                            for(j=3;j>i;j--)
                                                            {
                                                                               if(a[j]>a[j-1])
                                                                               {
                                                                                  m=a[j];
                                                                                  a[j]=a[j-1];
                                                                                  a[j-1]=m;
                                                                                   w=b[j];
                                                                                  b[j]=b[j-1];
                                                                                  b[j-1]=w;           
                                                                               }
                                                            }
                                           }
                                           cout<<b[0]<<" "<<a[0]<<endl;
                                           cout<<b[1]<<" "<<a[1]<<endl;
                                           cout<<b[2]<<" "<<a[2]<<endl;
                                           cout<<b[3]<<" "<<a[3]<<endl;
                                                                     
                                            }
                                           
                                           }
                        }
   }
cin>>k;
return 0;
}
