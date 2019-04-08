 int max(int a,int b)
 {
     if(a>=b)
        return a;
     else
        return b;
 }
 int main()
 {
     int a1[260],a2[260];
     char a_1[260],a_2[260];
     scanf("%s",a_1);
     scanf("%s",a_2);
     int n,i;
     for(i=0;i<260;i++)
     {
        a1[i]=0;
        a2[i]=0;
     }
     int l1=strlen(a_1);
        n=0;
     for(i=l1-1;i>=0;i--)
        a1[n++]=a_1[i]-'0';
     int l2=strlen(a_2);
        n=0;
     for(i=l2-1;i>=0;i--)
        a2[n++]=a_2[i]-'0';
     for(i=0;i<250;i++)
     {
        a1[i]=a1[i]+a2[i];
        if(a1[i]>=10)
        {
           a1[i]=a1[i]-10;
           a1[i+1]++;
        }
     }
     for(i=max(l1,l2);i>=0;i--)
     {
        if(a1[i]!=0)
        {
           n=i;
           goto t;
        }
        else
        {
           n=i;
        }
        if(n==0)
           goto t;  
     }
     t:for(i=n;i>=0;i--)
          printf("%d",a1[i]);
 }