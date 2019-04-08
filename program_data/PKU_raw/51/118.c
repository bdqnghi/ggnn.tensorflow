int main()
{
 int n,i,j,m=0;
 char a[505];
 char b[500][5];
 int c[500]={0};
 scanf("%d",&n);
 scanf("%s",&a);
 for(i=0;i<strlen(a)-n+1;i++)
 {     
     for(j=0;j<n;j++)
         b[i][j]=a[i+j];    
 }
 for(i=0;i<strlen(a)-n+1;i++)
 {     
     for(j=i;j<strlen(a);j++)
     {   
         if(strcmp(b[i],b[j])==0)
         c[i]++; 
         if(c[i]>m)
         m=c[i];
     }
 }
 if(m==1)
 printf("NO");
 else
 {
     printf("%d\n",m);
     for(i=0;i<strlen(a)-n+1;i++)
     {    
         if(c[i]==m)
         printf("%s\n",b[i]);
     }     
 }
 return 0;
}