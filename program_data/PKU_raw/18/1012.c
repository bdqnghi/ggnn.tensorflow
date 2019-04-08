int main()
{
    int a[110][110],b[110];
    int (*ju)[110]=a;
    int num1,num,i,j,m,sum=0,*min=b;
    cin>>num1;
    for(m=0;m<num1;m++)
    {
                      num=num1;
                      sum=0;
                      for(i=0;i<num;i++)
                                     for(j=0;j<num;j++) cin>>*(*(ju+i)+j);
                      while(num>1)
                      {
                                 // for(i=0;i<num;i++)
                                   //  for(j=0;j<num;j++) cout<<*(*(ju+i)+j);
                                  for(i=0;i<num;i++)
                                  {
                                                    *(min+i)=10000;
                                                    for(j=0;j<num;j++)
                                                                      if (*(*(ju+i)+j)<*(min+i)) *(min+i)=*(*(ju+i)+j);
                                  }
                                //  for(i=0;i<num;i++) cout<<min[i]<<endl;
                                  for(i=0;i<num;i++)
                                     for(j=0;j<num;j++) *(*(ju+i)+j)=*(*(ju+i)+j)-*(min+i);
                                    // for(i=0;i<num;i++)
                                      // for(j=0;j<num;j++) cout<<*(*(ju+i)+j);
                                  for(j=0;j<num;j++)
                                  {
                                                    *(min+j)=10000;
                                                    for(i=0;i<num;i++)
                                                                      if (*(*(ju+i)+j)<*(min+j)) *(min+j)=*(*(ju+i)+j);
                                  }
                                  //for(i=0;i<num;i++) cout<<min[i]<<endl;
                                  for(i=0;i<num;i++)
                                     for(j=0;j<num;j++) *(*(ju+i)+j)=*(*(ju+i)+j)-*(min+j);
                                 //  for(i=0;i<num;i++)
                                   //    for(j=0;j<num;j++) cout<<*(*(ju+i)+j);
                                     //  cout<<endl;
                                  sum=sum+*(*(ju+1)+1);
                                  //cout<<sum<<endl;
                                  for(i=0;i<num;i++)
                                  {
                                                    for(j=0;j<num-1;j++)
                                                    {
                                                                        if (j>=1) *(*(ju+i)+j)=*(*(ju+i)+j+1);
                                                    }
                                  }
                                //  for(i=0;i<num;i++)
                                  //   for(j=0;j<num-1;j++) cout<<*(*(ju+i)+j);
                                  for(j=0;j<num-1;j++)
                                  {
                                                    for(i=0;i<num-1;i++)
                                                    {
                                                                        if (i>=1) *(*(ju+i)+j)=*(*(ju+i+1)+j);
                                                    }
                                  }
                                 // for(i=0;i<num-1;i++)
                                   //    for(j=0;j<num-1;j++) cout<<*(*(ju+i)+j);
                                  num--;
                                  //cout<<sum<<" "<<num<<endl;
                      }
                      cout<<sum<<endl;
    }
    cin.get();cin.get();cin.get();cin.get();
    return 0;
}
