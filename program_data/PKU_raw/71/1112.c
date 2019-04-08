int main(int argc, char *argv[])
{
    int n,year[200],month1[200],month2[200],t,i,j,sum=0;
    int a[12];
    a[1]=31;
    a[3]=31;
    a[5]=31;
    a[7]=31;
    a[8]=31;
    a[10]=31;
    a[12]=31;
    a[4]=30;
    a[6]=30;
    a[9]=30;
    a[11]=30;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
       scanf("%d%d%d",&year[j],&month1[j],&month2[j]);
   for(j=1;j<=n;j++){ 
       sum=0;
       t=0;
       if((year[j]%4==0&&year[j]%100!=0)||year[j]%400==0)
         a[2]=29;
       else
         a[2]=28;
       if(month1[j]>month2[j]){
         t=month1[j];
         month1[j]=month2[j];
         month2[j]=t;
       }             
       for(i=month1[j];i<month2[j];i++){
          scanf("%d",&a[i]);
          sum+=a[i];
       }
       if(sum%7==0)
          printf("YES\n");
       else
          printf("NO\n");    
    }
   return 0;
}
