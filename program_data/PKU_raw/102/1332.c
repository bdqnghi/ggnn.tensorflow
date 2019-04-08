


main()
{


int n,i,j,x,y;
scanf("%d\n",&n);
double a[n],male[n],female[n],k;
char b[n][10];

for(i=0;i<n;i++)
{
                scanf("%s %lf",&b[i],&a[i]);
                male[i]=0;
                female[i]=0;
}

x=0;
y=0;
for(i=0;i<n;i++)
{
                if(b[i][0]=='m')
                {
                                male[x]=a[i];

                //printf("male[%d]=",x);
                //printf("%.2lf ",male[x]);
                //printf("a[%d]=",i);
                //printf("%.2lf ",a[i]);
                                x=x+1;
                }
                if(b[i][0]=='f')
                {
                                female[y]=a[i];
                                y=y+1;
                }
}

for(i=0;i<x;i++)
{
                for(j=i;j<x;j++)
                {
                                if(male[i]>male[j])
                                {
                                             k=male[i];
                                             male[i]=male[j];
                                             male[j]=k;
                                }
                }
}

for(i=0;i<x;i++)
{
                //printf("male[%d]=",i);
                printf("%.2lf ",male[i]);
}
for(i=0;i<y;i++)
{
                for(j=i;j<y;j++)
                {
                                if(female[i]<female[j])
                                {
                                             k=female[i];
                                             female[i]=female[j];
                                             female[j]=k;
                                }
                }
}


for(i=0;i<y-1;i++)
{
                 //printf("female[%d]=",i);
                 printf("%.2lf ",female[i]);
}

printf("%.2lf",female[y-1]);

}              
