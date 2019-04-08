int paixu(int shuzu[],int num)
{
    int i,j,jiaohuan;
    for(i=1;i<num;i++)
    {
                      for(j=0;j<num-i;j++)
                      {
                            if(shuzu[j]>shuzu[j+1])
                            {
                                                   jiaohuan=shuzu[j];
                                                   shuzu[j]=shuzu[j+1];
                                                   shuzu[j+1]=jiaohuan;
                            }              
                      }
     }  
}//??????????? 
int hebing(int shuzu1[],int num1,int shuzu2[],int num2)
{
    int i;
    for(i=0;i<num2;i++)shuzu1[i+num1]=shuzu2[i];
}//????1???2 
int main()
{
    int shuzu1[200],shuzu2[100],num1,num2,i,j;
    cin>>num1>>num2;
    for(i=0;i<num1;i++)cin>>shuzu1[i];
    for(i=0;i<num2;i++)cin>>shuzu2[i];
    paixu(shuzu1,num1);//???????1?? 
    paixu(shuzu2,num2);//???????2?? 
    hebing(shuzu1,num1,shuzu2,num2);//????????1???2 
    for(i=0;i<(num1+num2);i++)
    {
                              cout<<shuzu1[i];
                              if(i<(num1+num2-1))cout<<" ";
    }//???????? 
    cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();
    return 0;
    
}