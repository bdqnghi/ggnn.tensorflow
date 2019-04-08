int main()
{
    int a[4],b[4];
    int z,q,s,l;
    int i,j,k,t;
    b[0]='z';b[1]='q';b[2]='s';b[3]='l';
    for(i=1;i<=5;i++)
    {z=i;
                     for(j=1;j<=5;j++)
                     {q=j;
                                      if(j==i) continue;
                                      else
                                      {
                                          for(k=1;k<=5;k++)
                                          {s=k;
                                                           if(k==j||k==i) continue;
                                                           else
                                                           {
                                                               l=z+q-s;
                                                               if((z+l>s+q)&&l<=5&&(l!=z)&&(l!=q)&&(l!=s))
                                                               {if(z+s<q)
                                                                {a[0]=z;a[1]=q;a[2]=s;a[3]=l;}
                                                               }
                                                           }
                                          }
                                      }
                     }
    }
    for(i=0;i<4;i++)
    {
                    for(j=1;j<4-i;j++)
                    if(a[j-1]<a[j])
                    {t=a[j-1];a[j-1]=a[j];a[j]=t;
                     t=b[j-1];b[j-1]=b[j];b[j]=t;                     
                     }
    }
    for(i=0;i<4;i++)
    printf("%c %d\n",b[i],10*a[i]);                                         
    getchar(); 
}