int main()
{
    float male[40],female[40],all[41];
    int count1=0;
    int count2=0;
    int n,i,j,k;
    float s,t,y;
    char x[7],c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         scanf("%s",x);
         scanf("%f",&y);
         //printf("%s,%f\n",x,y);
         if(strlen(x)==4)
         {
              male[count1]=y;
              count1++;
         }
         else
         {
              female[count2]=y;
              count2++;
         }
    }
         for(i=0;i<=count1-2;i++)
           for(j=i+1;j<=count1-1;j++)
           {
                if(male[i]>male[j])
                {
                s=male[i];
                male[i]=male[j];
                male[j]=s;
                }
           }
         for(i=0;i<=count2-2;i++)
           for(j=i+1;j<=count2-1;j++)
           {
                if(female[i]<female[j])
                {
                t=female[i];
                female[i]=female[j];
                female[j]=t;
                }
           }
         for(k=0;k<=count1-1;k++)
            all[k]=male[k];
         for(k=count1;k<=count1+count2-1;k++)
            all[k]=female[k-count1];
for(k=0;k<=count1+count2-2;k++)
{
printf("%.2f ",all[k]);
}
printf("%.2f",all[count1+count2-1]);
}
