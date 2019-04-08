int main()
{
    int input,shu[101][101],min[101],min1[101],sum,i,j,i1,j1,n,num;//num,input????,shu??????,min,min1,??????????sum?shu[1][1]??i,j,i1,j1???? 
    cin>>input;
    for(n=1;n<=input;n++)
    {
        num=input; 
        for(i=0;i<num;i++)
        {
              for(j=0;j<num;j++) cin>>shu[i][j];
        }
        sum=0; //?sum??  
        while(num>1) //?num?????????? 
        { 
                       for(i=0;i<num;i++)//?????? 
                       {
                                         min[i]=1000000;
                                         min1[i]=10000000;
                       } 
                       for(i=0;i<num;i++)
                       {
                                         for(j=0;j<num;j++)
                                         {
                                                           if (shu[i][j]<min[i]) min[i]=shu[i][j];//??????? 
                                                           if (j==num-1) //????? 
                                                           {
                                                                        for(j1=0;j1<num;j1++) shu[i][j1]=shu[i][j1]-min[i];//????? 
                                                           }
                                         }
                       }
                       for(j=0;j<num;j++)
                       {
                                         for(i=0;i<num;i++)
                                         {
                                                           if (shu[i][j]<min1[j]) min1[j]=shu[i][j];//??????? 
                                                           if (i==num-1) //????? 
                                                           { 
                                                                        for(i1=0;i1<num;i1++) shu[i1][j]=shu[i1][j]-min1[j];//????? 
                                                           }
                                         }
                       }
                       sum=sum+shu[1][1]; //??
                       for(i=0;i<num;i++)
                       {
                                         for(j=1;j<num-1;j++) shu[i][j]=shu[i][j+1];//??? 
                       }
                       for(j=0;j<num-1;j++)
                       {
                                         for(i=1;i<num-1;i++) shu[i][j]=shu[i+1][j];//??? 
                       }
                       num--;
        }
        cout<<sum<<endl;
    }
    cin.get();cin.get();cin.get();cin.get();cin.get();cin.get(); 
    return 0;
} 