 int main() 
{
     int n,y=0;
     scanf("%d",&n);
     char a[500];
     scanf("%s",a);
     int b[500];
     int s=strlen(a);
     for(int i=0;i<s-n+1;i++)
     {
         b[i]=1;
         for(int d=1;d<s;d++)
     {
         int m=0,t;
         for(t=i;t<i+n;t++)
         {
         if(a[t]==a[t+d])
         m++;
         }
               if(m==n)
               b[i]++;
     }
     }
     for(int e=0;e<s-n;e++)
     {
             int f ,w=0;
             for(f=0;f<s-n;f++)
             {
                     if(b[e]<b[f]);
                     else w++;
             }
             if(w==s-n)
             { 
                       
                       if(b[e]>1){y++;
                       if(y==1)
                       printf("%d\n",b[e]);
                       for(int p=0;p<n;p++)
                       {printf("%c",a[e+p]);}
                       printf("\n");}
                       else { printf("NO\n");break;}
             }
     }
         
}