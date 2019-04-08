int main()
{
    int a,b,s=0;
    int i,c,j,k,o;
    int number2[40];
    char number[40],number1[40],number3[40];
    scanf("%d",&a);
    scanf("%s",number);
    scanf("%d",&b);

    
     int q1,p1;
     p1=strlen(number);
     for(q1=0;number[q1]!='\0';q1++)
     number1[p1-q1-1]=number[q1];
     number1[p1]='\0';
     

    
    for(i=0;number1[i]!='\0';i++)
    {
       if(number1[i]>=97)
       c=number1[i]-87;
       else
       {
            if(number1[i]>=65)
            c=number1[i]-55;
            else
            c=number1[i]-48;
       }
       o=1;
       for(int l=1;l<=i;l++)
       {
       
       o=o*a;
       }
       s=o*c+s;
    }
    
    if(s==0)
    puts("0");
    else
    {
    
    for(j=0;s!=0;j++)
    {
                   
       number2[j]=s%b;
        s=s/b;    
        }

     int q2,p2;
     p2=j;
     for(q2=0;q2<p2;q2++)
     {
     if(number2[q2]>9)
     number2[q2]=number2[q2]+55;
     else
      number2[q2]=number2[q2]+48;
     number3[p2-q2-1]=number2[q2];
     }
     number3[p2]='\0';
     
    puts(number3);
    
     }
    
    getchar(); 
    getchar();
    getchar();
    getchar();
    return 0;
}