
int Convert(int *n,char *s);

int main()
{
 int x[2000]={0},y[2000]={0};
 char s1[4000],s2[4000];
 int t,i,num,count=0,max=0;
 
 gets(s1);
 gets(s2);
 
 num=Convert(x,s1);
 Convert(y,s2);
 printf("%d",num);

 for(t=0;t<1000;t++)
    {
      for(i=0,count=0;i<num;i++)
         {
           if(t>=x[i]&&t<y[i])
             count++;
         }
      if(count>max)
         max=count;
    }

 printf(" %d",max);
 return 1;
}

int Convert(int *n,char *s)
{
 int lenth,i,j;
 lenth=strlen(s);
 for(i=0,j=0;i<lenth;i++)
    {
     if(s[i]!=',')
        n[j]+=n[j]*10+s[i]-'0';
     else 
          j++;
    }
 return j+1;
}
 
    
