int main()
{
   int i, n, k, t, j, m;
   int a[13], b[13];
   a[1]=b[1]=0;
   a[2]=b[2]=31;
   a[3]=b[3]=59;
   a[4]=b[4]=90;
   a[5]=b[5]=120;
   a[6]=b[6]=151;
   a[7]=b[7]=181;
   a[8]=b[8]=212;
   a[9]=b[9]=243;
   a[10]=b[10]=273;
   a[11]=b[11]=304;
   a[12]=b[12]=334;
   scanf("%d", &n);
   for(i=1;i<=n;i++)
   {
       scanf("%d%d%d", &k, &t, &j);
       if(t<j)
       {
           m=t;
           t=j;
           j=m;
       }
       if(k%4!=0||k%100==0&&k%400!=0)
       {
           if((a[t]-b[j])%7==0)
           {
               printf("YES\n");
           }
           else
           {
               printf("NO\n");
           }      
       }
       else if((k%4==0&&k%100!=0)||(k%400==0))
       {
            if(t>2&&j>2)
            {
                if((a[t]-b[j])%7==0)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else if(t<=2&&j>2||j<=2&&t>2)
            {
			//	printf("%d %d ", t ,j);
                if((b[t]-a[j]+1)%7==0)
                 {
                     printf("YES\n");
                 }
                 else
                 {
                     printf("NO\n");
                 }
            } 
           else
           {
               printf("NO\n");
           }
       }
   }      
      return 0;
}
