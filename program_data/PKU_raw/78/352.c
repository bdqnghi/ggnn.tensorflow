
int main()
{
    int z,q,s,l,i,j;
    int a[4],temp;
    for(z=10;z<=50;z=z+10)
      for(q=10;q<=50;q=q+10)
        for(s=10;s<=50;s=s+10)
          for(l=10;l<=50;l=l+10)
             {
                 if(z+q==s+l)
                   if(z+l>s+q)
                     if(z+s<q)//?????????????
                       if(z!=q&&z!=s&&z!=l)
                         if(q!=s&&q!=l)
                           if(s!=l)//?????????????????????????????
                             {
                                a[0]=z;
                                a[1]=q;
                                a[2]=s;
                                a[3]=l;//??????????
                            for(j=0;j<3;j++)
                                for(i=j+1;i<4;i++)
                                  {
                                      if(a[j]<a[i])
                                        {
                                          temp=a[j];
                                          a[j]=a[i];
                                          a[i]=temp;//???????
                                        }
                                  }
                                for(i=0;i<4;i++)
                                  {
                                      if(z==a[i])  cout<<"z"<<" "<<a[i]<<endl;//????????“??”??????
                                      if(q==a[i])  cout<<"q"<<" "<<a[i]<<endl;
                                      if(s==a[i])  cout<<"s"<<" "<<a[i]<<endl;
                                      if(l==a[i])  cout<<"l"<<" "<<a[i]<<endl;
                                  }


                             }
             }
                             return 0;
}



