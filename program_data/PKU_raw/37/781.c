int main()
{
    int b=0,i=0,j=0,k=0,n=0;char a;int x[26],y[26];
    cin>>n;getchar();
    for(i=0;i<=25;i++)
    {
                      x[i]=y[i]=0;
    }
    for(k=1;k<=n;k++)
    {for(i=0;i<=25;i++)
    {
                      x[i]=y[i]=0;
    }

                     for(i=1;;i++)
                     {
                            a=getchar(); 
                            if(a=='\n') break; b=a-97;
                            if(x[b]>b+97) continue;
                            
                            if(x[b]==0) y[b]=i;
                            x[b]=x[b]+a;//cout<<b<<"  "<<x[b]<<"  "<<y[b]<<endl;
                     }
                     b=0;
                     for(j=0;j<=25;j++)
                     {
                                       if(y[j]==0) b=b+1;//cout<<b<<endl;
                      }
                      for(j=0;j<=25;j++)
                      {
                                        if(x[j]>j+97) b=b+1;//cout<<b<<endl;
                      }
                      if(b==26) cout<<"no"<<endl;
                      else
                      {
                          for(j=1;j<=100;j++)
                          {
                                                for(i=0;i<=25;i++)
                                                {//cout<<i<<"  "<<x[i]<<"  "<<y[i]<<endl;
                                                                  if(x[i]!=i+97) continue;
                                                                  if(y[i]==j)
                                                                  {
                                                                             a=i+97;
                                                                             break;
                                                                  }
                                                                  
                                                }
                                                if(y[i]==j)
                                                                  {
                                                                             cout<<a<<endl;;
                                                                             break;
                                                                  }
                          }
                      }
     }

return 0;
}    

