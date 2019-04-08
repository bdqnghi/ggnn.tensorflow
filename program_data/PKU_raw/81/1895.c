int qq(int m,int n)
{if(m<5&&m>=0&&n<5&&n>=0)
   return 1;
   else
   return 0;
    
}
int main()
{
    int a,b,c,d[5][5],i,j;
 
   for(i=0;i<5;i++)
   {
                   scanf("%d%d%d%d%d",&d[i][0],&d[i][1],&d[i][2],&d[i][3],&d[i][4]);
                   }
   scanf("%d %d",&a,&b);
   c=qq(a,b);
   if(c==0)
   printf("error");
   else
   {
       for(i=0;i<5;i++)
   {
                    if(i==a)
                   printf("%d %d %d %d %d\n",d[b][0],d[b][1],d[b][2],d[b][3],d[b][4]);
                   else if(i==b)
            
                   printf("%d %d %d %d %d\n",d[a][0],d[a][1],d[a][2],d[a][3],d[a][4]);
                   else
                   printf("%d %d %d %d %d\n",d[i][0],d[i][1],d[i][2],d[i][3],d[i][4]);
                   }
       
   }
   
    getchar();getchar();getchar();  getchar();getchar();getchar();  getchar();getchar();getchar();  getchar();getchar();getchar();  getchar();getchar();getchar();
    
}