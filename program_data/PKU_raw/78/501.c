int main()
{ char a[10];
  int z,q,s,l,i,j,k,t;
  for (i=1;i<=5;i++)
       a[i] =' ';
  for (z=1;z<=5;z++)
       for (q=1;q<=5;q++)
            { if (z==q) continue ;
              for (s=1;s<=5;s++)
                   { if ((s==q)||(s==z)) continue ;
                    for (l=1;l<=5;l++) 
                     {if ((l==z)||(l==q)||(l==s)) continue;
                     if ((z+q==s+l)&&(z+l>s+q)&&(z+s<q)) 
                         {a[z]='z';
                          a[q]='q';
                          a[s]='s';
                          a[l]='l';
                          for (i=5;i>=1;i--)
                               if (a[i]!=' ') cout <<a[i]<<' '<<i*10<<endl;
                   
                          } } 
                           }
                           }
  return 0;
                   
}
