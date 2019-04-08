int main()
{
    int y,m,d,i=0,yu=0,j;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 
    char b[7][10]={{"Sun."},
                   {"Mon."}, 
                   {"Tue."}, 
                   {"Wed."},
                   {"Thu."}, 
                   {"Fri."}, 
                   {"Sat."}};
    scanf("%d %d %d",&y,&m,&d);
    yu=(yu+(y-1)/4-(y-1)/100+(y-1)/400+((y-1)%7)*365)%7;
    if((y%100!=0&&y%4==0)||(y%400==0))
     {
         for(j=0;j<m-1;j++) i+=a[j];
         if(m>2)i+=1;                
     }
     else
     {
         for(j=0;j<m-1;j++) i+=a[j];                
     }
     yu=(i+d+yu)%7;
     printf("%s",b[yu]);
} 
