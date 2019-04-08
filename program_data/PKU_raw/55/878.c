
int main()
{
   long a,b,i,j,k,l,z,length,sum10,zhi;
   i=0;
   j=0;
   k=1;
   l=0;
   z=0;
   length=0;
   sum10=0;
   zhi=0;
   char n[50],r[50];
   scanf("%d%s%d",&a,n,&b);
   long m[50][2],o[50][2],n2[50];
   length=strlen(n);
  
    
  for(i=0;i<length;i++)
   {
      if(n[i]<='9')
      n2[i]=n[i]-'0';
      else if(n[i]<'a'&&n[i]>'9')
      n2[i]=n[i]-'A'+10;             
      else 
      n2[i]=n[i]-'a'+10;
      
   } 
   
   
   for(i=0;i<length;i++)
   {
     m[i][0]=n2[i];
     m[i][1]=length-i-1;
     zhi=m[i][0];
     for(j=1;j<=m[i][1];j++)
     {
         zhi=zhi*a;
     }
     sum10=sum10+zhi;
     zhi=0;
    }
   
   if(sum10==0)
   printf("0");
   else
   {   
   k=sum10;
   
   while(k!=0)
   {
      o[l][0]=k%b;
      k=k/b;
      o[l][1]=l;
      l++;
   }
   
   length=l;
   
   for(i=0;i<length;i++)
   {
      if(o[l-i-1][0]<=9)
      r[i]=48+o[l-i-1][0];
      else
      r[i]=o[l-i-1][0]-10+65;             
   }
    r[length]='\0';
    //printf("%s",r);
    puts(r);
}  
    getchar();
    getchar();
    
}