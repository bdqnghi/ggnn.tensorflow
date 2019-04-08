int jisuan(int n,int k) 
{   
    const int boyNum=k;
    unsigned int m=1; 
    unsigned int num; 
    unsigned int allNum;//???? 
    int i=0;  
    while(i<n-1) 
    { 
    num = m; 
    for(;i<n-1;i++) 
    { 
    allNum = num*n+boyNum; 
    if((allNum%(n-1)) != 0) 
    { 
     i=0;//?????? 
     break; 
     
    } 
    num = allNum/(n-1);//???(n-1) 
    } 
    m++; 
    } 
    allNum = num*n+boyNum;
    return(allNum);  
  
} 

main()
{
      int n,k;
      scanf("%d%d",&n,&k);
      unsigned int jisuanzhi;
      jisuanzhi=jisuan(n,k);
      printf("%u",jisuanzhi); 
      getchar();getchar();
      
}
