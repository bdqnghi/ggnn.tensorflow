
int main()
{
    char shuru[1000];
    char shuchu[1000];
    scanf("%s",shuru);
    int i,length,yushu;
    int a[1000][2];
    int shang[1000];
    length=strlen(shuru);
    
    for(i=0;i<length;i++)
    {
        a[i][0]=shuru[i]-'0';                     
    }
    yushu=0;
    int yushu2;
    for(i=0;i<length;i++)
    {
       yushu=yushu*10+a[i][0];                  
       if(yushu>=13)
       {
          yushu2=yushu;
          yushu=yushu%13;
          shang[i]=yushu2/13;      
       }
       else
       {
          shang[i]=0;    
          yushu=yushu;
       } 
    }
     
    if(shang[0]==0&&shang[1]!=0)
    {
       for(i=1;i<length;i++)
       {
         shuchu[i-1]=shang[i]+'0';                            
       }
       shuchu[length-1]='\0';
    }
    else if(shang[0]==0&&shang[1]==0)
    {
       for(i=2;i<length;i++)
       {
         shuchu[i-2]=shang[i]+'0';                            
       }
       shuchu[length-2]='\0';
    }
    else
    {
       for(i=0;i<length;i++)
       {
         shuchu[i]=shang[i]+'0';                            
       }
    }
    shuchu[i-1]='\0';
    int t;
    t=a[0][0]*10+a[1][0];
    if(length==1&&a[0][0]==0)
    {
    char c[2];
    c[0]='0';
    
    printf("%s\n",c); 
    printf("0");
    }
    else if(length==1)
    {
    char c[2];
    c[0]='0';
    
    printf("%s\n",c); 
    printf("%d",yushu);
    }
    else if(t<13&&length==2)
    {
    char c[2];
    c[0]='0';
    
    printf("%s\n",c); 
    printf("%d",yushu);
    }
    else
    {
    printf("%s\n",shuchu); 
    printf("%d",yushu);
    }
    getchar();
    getchar();
}
