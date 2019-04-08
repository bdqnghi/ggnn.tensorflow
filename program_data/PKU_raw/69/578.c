char a[255],b[255],c[255];
int plus(int l1,int l2)
{    
     int i,l;
    if(l1 > l2) l = l1;
    else l = l2;
   for(i = 0;i < l;i ++) 
     {
          b[i] = b[i] + c[i];
          if(b[i]>=10)
          {
            b[i] -= 10;
            b[i+1] ++;  
          }    
     }
    if(b[l]) l++;
    return l;
}
int main()
{
   int l1,l2,l;    
   int j;    
   scanf("%s",a);
   l1 = strlen(a); 
   getchar();
   for(j = 0;j < l1;j ++)
       b[l1-j-1] = a[j] - '0';
   scanf("%s",a);
   l2 = strlen(a); 
   for(j = 0;j < l2;j ++)
       c[l2-j-1] = a[j] - '0';
   l = plus(l1,l2); 
   while(b[l-1] == 0 && l)
   l--;  
   for(j = l-1;j >= 0;j--)
   printf("%c",b[j]+'0');
   if(l == 0) printf("0");
  return 0;    
}
