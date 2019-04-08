int main()
{
int len,i,t,y,k,x; 
char a[101];
gets(a);
len=strlen(a);
int s[len],w[len];
for(i=0;i<len;i++)
{
s[i]=a[i]-'0';
w[i]=0;
}

if(len==1)
 {
          printf("0\n");
          printf("%d",s[0]);
 }
 
else if(len==2&&(10*s[0]+s[1])<13)
 {
          printf("0\n");
          printf("%d",s[0]*10+s[1]);
 }

else
{
for(i=0,k=0;i<len-1;i++)
{
t=10*s[i]+s[i+1];

if(t<13) 
 {
         w[k]=0;
         k++;
         s[i+1]=t;
 }
else
 {
 y=t%13;
 if(y!=0)
   {
        x=(t-y)/13;
        w[k]=x;
        k++;
        s[i+1]=y;
              
   }
  else
   {
        x=t/13;
        w[k]=x;
        k++;
        s[i+1]=0;      
              
   } 
 }
}
for(i=0;i<k;i++) 
if(w[i]!=0){x=i;break;}
for(i=x;i<k;i++)
printf("%d",w[i]);
printf("\n%d",s[len-1]);
}                    
} 
