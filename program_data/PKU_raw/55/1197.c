int main()
{
    int n=-1,a=0,b=0,num,s=0,i=0,j=1;//??????n ???a ????b  ??????????num ??????????s ????i,j
    char numb[32];//?????? 
    cin >>a;//????? 
    numb[0]=cin.get();
    do  
        {n++;}
    while ((numb[n]=cin.get())!=' '); //?????? 
    for (i=0;i<n;i++)//???????????
       {
          num=1;
          if (numb[i]<58)
             numb[i]=numb[i]-48;
          else if (numb[i]>96)
                  numb[i]=numb[i]-87;
               else numb[i]=numb[i]-55;                                
          for (j=1;j<n-i;j++) num=num*a;
          s+=num*numb[i];     
       }
    cin >>b;
    n=0;
    do
       {
          num=s%b;
          if (num<10)
             numb[n]=num+48;
          else 
             numb[n]=num+55;   
          n++;
          s=s/b;
       }
    while (s!=0) ; 
    for (n=n-1;n>=0;n--) cout <<numb[n];//???????? 
    return 0;    
}
