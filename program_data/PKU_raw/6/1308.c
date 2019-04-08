int main()
{
    int (* juzhen)[101]=NULL;//?????? 
    int i,j,m,num,hang,lie,input[101][101];
    cin>>num;//?????? 
    for(m=0;m<num;m++)
    {
                      cin>>hang>>lie;//??????? 
                      int sum=0;//?? 
                      for(i=0;i<hang;i++)
                           for(j=0;j<lie;j++) cin>>input[i][j];
                      juzhen=input;
                      for(i=0;i<hang;i++)
                      {
                                         for(j=0;j<lie;j++)
                                         { 
                                                           if ((i==0)||(i==hang-1)||(j==0)||(j==lie-1))//??????? 
                                                           sum=sum+*(*(juzhen+i)+j);//???? 
                                         }
                      } 
                      cout<<sum<<endl;
    }
    return 0;
}
