int main(){
int m,n,k,i,j,x,y,z;
z=0;
scanf("%d",&n);
char a[500];
scanf("%s",a);
m=strlen(a);
int c[m-n+1];
for(i=0;i<m-n+1;i++)c[i]=0;
char b[m-n+1][n];
for(i=0;i<m-n+1;i++){
   for(j=0;j<n;j++){      
      b[i][j]=a[j+i];
      }
   }
for(i=0;i<m-n+1;i++){
   for(j=i;j<m-n+1;j++){
       x=0;
       for(k=0;k<n;k++){
          if(b[i][k]==b[j][k])x++;
          }
       if(x==n)c[i]++;
       }
   }
for(i=0;i<m-n+1;i++){
   y=0;              
   for(j=0;j<m-n+1;j++){
       if(c[i]>=c[j])y++;
       }
   if(y==(m-n+1)&&c[i]!=1&&z==0){
      printf("%d\n",c[i]);
      z=1;
      }
   if(y==(m-n+1)&&c[i]!=1){
      for(j=0;j<n-1;j++)printf("%c",b[i][j]);
      printf("%c\n",b[i][n-1]);
      }
   if(y==(m-n+1)&&c[i]==1){
   printf("NO");
   break;
}
   }  
scanf("%d",&i);
return 0;
}
   
