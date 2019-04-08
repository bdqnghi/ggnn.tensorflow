main()
{
     int a,b,num1[100],num2[100],l1=0,l2=0,i,j=0;
     long n=0;
     char ch1[100],ch2[100],c;
     for(i=0;i<100;i++)
     {
         num1[i]=0;
         num2[i]=0;
         ch1[i]='0';
         ch2[i]='0';
     }
     scanf("%d ",&a);
     for(i=0;(c=getchar())!=' ';i++)
     {
         l1++;
         ch1[i]=c;
         if('0'<=c&&c<='9')num1[i]=c-'0';
         else if('a'<=c&&c<='z')num1[i]=c-'a'+10;
         else if('A'<=c&&c<='Z')num1[i]=c-'A'+10;
     }
     scanf("%d",&b);
     for(i=0;i<l1;i++)
         n=n+num1[i]*(int)pow(a,l1-1-i);
     for(i=1;j==0;i++)
     {
         if(n/(int)pow(b,i)==0)
         {
            j=1;
            break;
         }
     }
     l2=i;
     for(i=0;i<l2;i++)
     {
         num2[99-i]=n%b;
         n=(n-num2[99-i])/b;
         if(0<=num2[99-i]&&num2[99-i]<=9)ch2[99-i]=num2[99-i]+'0';
         else if(10<=num2[99-i])ch2[99-i]=num2[99-i]-10+'A';
     }
     for(i=0;i<l2;i++)
         printf("%c",ch2[100-l2+i]);
}

