int main()
{
    char input[501],word[501][7];
    char ctemp;
    int num,i,j,length,k,jishu[501],temp,m,count;
    cin>>num;
    for(i=0;i<501;i++) input[i]='\0';
    for(i=0;i<501;i++) jishu[i]=1;
    for(i=0;i<501;i++)
         for(j=0;j<7;j++) word[i][j]='\0';
    cin.get();
    cin.get(input,501);
    length=strlen(input);
    k=-1;
    for(i=0;i<length-num+1;i=i-num+1)
    {
                         k++;
                         for(j=0;j<num;j++) 
                         {
                                            word[k][j]=input[i];
                                            i++;
                         }
    }
    for(i=0;i<k+1;i++)
    {
                      for(j=i+1;j<k+1;j++)
                      {
                                      count=0;
                                      for(m=0;m<num;m++)
                                      {
                                                        if (word[i][m]!=word[j][m]) break;
                                                        else count++;
                                      }
                                      if (count==num) jishu[i]++;
                      }
    }
   // for(i=0;i<k+1;i++) cout<<word[i]<<" "<<jishu[i]<<endl;
    for(i=0;i<k;i++)
    {
                    for(j=0;j<k-i;j++)
                    {
                                      if (jishu[j]<jishu[j+1])
                                      {
                                                              temp=jishu[j];
                                                              jishu[j]=jishu[j+1];
                                                              jishu[j+1]=temp;
                                                              for(int m=0;m<num;m++)
                                                              {
                                                                      ctemp=word[j][m];
                                                                      word[j][m]=word[j+1][m];
                                                                      word[j+1][m]=ctemp;
                                                              }
                                      }
                    }
    }
    //for(i=0;i<k+1;i++) cout<<jishu[i]<<endl;
    if (jishu[0]>1)
    {
                    cout<<jishu[0]<<endl;
                    for(i=0;i<k+1;i++)
                    {
                                      if (jishu[i]==jishu[0]) cout<<word[i]<<endl;
                                      else break;
                    }
    }
    else cout<<"NO";
    cin.get();cin.get();cin.get();cin.get();
    return 0;            
}
