long exp(int a)
{
      int def1,expo=1;
      for(def1=1;def1<=a;def1++)
      expo=expo*10;
      return expo;
}
main()
{
      int n,i,j,comp,idlenth,sw=0,test=0,advnum=0,arradv=1,arrdis,cache;
      int bubble,maxage,maxid,maxnum,maxright,print;
      scanf("%d",&n);
      int age[n+1],adv[n+1],ord[n+1],alrscan[n+1],numord[n+1],right[n+1];
      getchar();
      long id[n+1];
      for(i=1;i<=n;i++)
      {
            ord[i]=numord[i]=i;
            alrscan[i]=0;
            right[i]=0;
      }
      for(i=1;i<=n;i++)
      scanf("%d %d",&id[i],&age[i]);
      for(i=1;i<=n;i++)
      {
                       if(age[i]>=60)
                       {       
                              adv[i]=1;
                              right[i]+=age[i]*1000;
                              right[i]+=1000000;
                              advnum++;
                       }
                       else
                       adv[i]=0;
      }
      for(i=1;i<=n;i++)
      {
                       
                       right[i]+=n-i+1;
                       alrscan[i]=0;
      }
      for(i=1;i<=n;i++)
      {
                       maxright=0;
                       for(j=1;j<=n;j++)
                       {
                                 if(right[j]>maxright&&alrscan[j]==0)
                                 {maxright=right[j];
                                 maxnum=j;}
                       }
                       ord[i]=maxnum;
                       alrscan[maxnum]=1;
      }
      for(idlenth=1;test!=n;idlenth++)
      {
                      test=0;
                      for(j=1;j<=n;j++)
                      if(id[j]<exp(idlenth-1))
                      test++;
      }
      idlenth--;
      for(i=1;i<=n;i++)
      {
                       for(j=1;j<=idlenth;j++)
                       {
                                              
                               if(id[ord[i]]<exp(idlenth-j-1))
                               printf("0");
                       }
                       printf("%d\n",id[ord[i]]);
                       //printf("%d %d %d\n",id[ord[i]],numord[ord[i]],right[ord[i]]);
      }                                        
      /*arrdis=advnum+1;
      for(i=1;i<=n;i++)
      {
                       if(adv[i]==1)
                       {
                                ord[arradv]=i;
                                arradv++;
                       }
                       else
                       {
                                ord[arrdis]=i;
                                arrdis++;
                       }
      }
      //printf("adv=%d,dis=%d",arradv,arrdis);
      for(bubble=advnum;bubble>=1;bubble--);
      {
            for(i=1;i<bubble;i++)
            {
                       if(age[ord[i+1]]>age[ord[i]])
                       {
                                cache=ord[i+1];
                                ord[i+1]=ord[i];
                                ord[i]=cache;
                       }
            }
      }
      for(bubble=n;bubble>=advnum+1;bubble--);
      {
            for(i=advnum+1;i<bubble;i++)
            {
                       if(id[ord[i+1]]>id[ord[i]])
                       {
                                cache=ord[i+1];
                                ord[i+1]=ord[i];
                                ord[i]=cache;
                       }
            }
      }                      
      for(idlenth=1;test!=n;idlenth++)
      {
                      test=0;
                      for(j=1;j<=n;j++)
                      if(id[j]<exp(idlenth-1))
                      test++;
      }
      idlenth--;
      for(i=1;i<=n;i++)
      {
                       for(j=1;j<=idlenth;j++)
                       {
                                              
                               if(id[ord[i]]<exp(idlenth-j-1))
                               printf("0");
                       }
                       printf("%d\n",id[ord[i]]);
      }*/
      getchar();
      getchar();
      return 0;
}
      
      
