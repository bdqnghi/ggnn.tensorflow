int main()
{
    int n,i,j,s,m;
    int an[200][3]={0};
    int t[12]={0};
    scanf("%d",&n);
    m=0;
    for (i=0;i<n;i++){
      for (j=0;j<=2;j++)
         scanf("%d",&an[i][j]);
         }
    for (i=0;i<n;i++) {
        t[i]=0;          
       if (an[i][1]<an[i][2]){
            m=an[i][1];
            an[i][1]=an[i][2];
            an[i][2]=m;
            }                   
           while (an[i][1]>an[i][2]){
              s=an[i][1]-1;
             if ((s==11)||(s==9)||(s==6)||(s==4))
                t[i]=t[i]+30;
                                    
             if((s==10)||(s==8)||(s==7)||(s==5)||(s==3)||(s==1))
                t[i]=t[i]+31;
             
             if (s==2){
                if ((an[i][0]%4==0)&&(an[i][0]%100!=0)||an[i][0]%400==0)
                  t[i]=t[i]+29;
                 else 
                  t[i]=t[i]+28;
                }      
             an[i][1]=an[i][1]-1; 
             }
     }
     for (i=0;i<n;i++)
       if (t[i]%7==0){
         printf("YES");
         printf("\n");
         }
       else {
         printf("NO");
         printf("\n");
         }
     
     return 0;
}         
    