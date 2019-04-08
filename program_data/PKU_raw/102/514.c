int main() 
{
    int n,i,j,nan=0,nv=0;
    char s[10];
    double h,male[40],female[40];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         scanf("%s%lf",s,&h);
         if(strlen(s)==4)
         {
             nan++;
             male[nan-1]=h;
         }else if(strlen(s)==6){
             nv++;
             female[nv-1]=h;
         }
    }
    for(i=1;i<=nan;i++)
    {
         for(j=0;j<nan-i;j++)
         {
             if(male[j]>male[j+1])
             {
                 double e;
                 e=male[j];
                 male[j]=male[j+1];
                 male[j+1]=e;
             }
         }
    }
    for(i=1;i<=nv;i++)
    {
         for(j=0;j<=nv-i;j++)
         {
             if(female[j]<female[j+1])
             {
                 double e;
                 e=female[j];
                 female[j]=female[j+1];
                 female[j+1]=e;
             }
         }
    }
    printf("%.2lf",male[0]);
    for(i=1;i<nan;i++)
    {
                      printf(" %.2lf",male[i]);
    }
    for(i=0;i<nv;i++)
    {
                      printf(" %.2lf",female[i]);
    }
    return 0;
}