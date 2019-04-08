char a[105],b[105],c[105];
void minus(int l1,int l2)
{    
     int i,j;
   for(i = 0;i < l2;i ++) 
     {
       if(b[i]>=c[i])
          b[i] -= c[i];
        else
        {
          b[i] = b[i] + 10 - c[i];
          j = i + 1;
          b[j]--;
          while(b[j]<0)
          {
            b[j] += 10;
              j++; 
            b[j]--;  
          }    
        } 
     }
     
}
int main()
{
    int n,i,max,j;
    int l1,l2;
    char m;
   scanf("%d",&n);
   for(i = 1;i <= n;i ++)
      {
           scanf("%s",a);
           l1 = strlen(a); 
           scanf("%c",&m);
           for(j = 0;j < l1;j ++)
              b[l1-j-1] = a[j] - '0';
             memset(a,0,sizeof(a));
           scanf("%s",a);
           scanf("%c",&m);
            l2 = strlen(a); 
           for(j = 0;j < l2;j ++)
              c[l2-j-1] = a[j] - '0';
           minus(l1,l2);  
          while(!b[l1-1])
             l1--;  
        for(j = l1 - 1;j>=0;j --)
           printf("%d",b[j]);   
        printf("\n");
      }
  
   
    return 0;    
}