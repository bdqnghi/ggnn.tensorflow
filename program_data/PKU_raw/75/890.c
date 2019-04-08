int main()
{
    int i,j,t,p,s,k,total,mintime=1000,maxtime=0,mostnum=0,in[3000]={0},out[3000]={0},people;
    char s1[10000],s2[10000],time[5];
    cin.getline(s1,10000);
    cin.getline(s2,10000);
    j=0;
    k=0;
    time[0]='\0';
    for(i=0;i<strlen(s1);i++)
      {if(s1[i]!=',')
         {time[k]=s1[i];
          k++;}
         else 
           {time[k]='\0';
            p=1;
            for(t=strlen(time)-1;t>=0;t--)
              {
               in[j]+=p*(time[t]-'0');
               p*=10;
               }
            if(in[j]<mintime) mintime=in[j];
            j++;
            k=0;
            time[0]='\0';
            }
      }
      total=j+1;
      time[k]='\0';
      p=1;
      for(t=strlen(time)-1;t>=0;t--)
        {
          in[j]+=p*(time[t]-'0');
          p*=10;
        }
    if(in[j]<mintime) mintime=in[j];
    j=0;
    k=0;
    time[0]='\0';
    for(i=0;i<strlen(s2);i++)
      {if(s2[i]!=',')
         {time[k]=s2[i];
          k++;}
         else 
           {time[k]='\0';
            p=1;
            for(t=strlen(time)-1;t>=0;t--)
              {
               out[j]+=p*(time[t]-'0');
               p*=10;
               }
            if(out[j]>maxtime) maxtime=out[j];
            j++;
            k=0;
            time[0]='\0';
            }
      }
      time[k]='\0';
      p=1;
      for(t=strlen(time)-1;t>=0;t--)
        {
          out[j]+=p*(time[t]-'0');
          p*=10;
        }
      if(out[j]>maxtime) maxtime=out[j];
      for(i=mintime;i<maxtime;i++)
        {people=0;
         for(j=0;j<total;j++)
          {if((in[j]<=i)&&(out[j]>i))
             people++;
          }
          if(people>mostnum) mostnum=people;
        }
    cout<<total<<" "<<mostnum<<endl;
       return 0;}
