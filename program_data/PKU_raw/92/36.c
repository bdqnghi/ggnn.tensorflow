void main()
{
int m,n,tq[2][1000],j,k,w,K,money,g,a,c[100],d,e,i;
for(m=0,d=0;;m++,d++)
{
scanf("%d",&n);
if(n==0)break;
for(j=0;j<2;j++)
for(k=0;k<n;k++)scanf("%d",&tq[j][k]);
for(j=0,k=0;k<n-1;k++)
         for(K=0;K<n-1-k;K++)
         if(tq[0][K]<tq[0][K+1])
         {
                 w=tq[0][K];
                 tq[0][K]=tq[0][K+1];
                 tq[0][K+1]=w;
         }
for(j=1,k=0;k<n-1;k++)
         for(K=0;K<n-1-k;K++)
         if(tq[1][K]<tq[1][K+1])
         {
                 w=tq[1][K];
                 tq[1][K]=tq[1][K+1];
                 tq[1][K+1]=w;
         }
for(g=n-1,money=0;g>0;g--)
{
         if(tq[0][g]>tq[1][g])i=0;
         if(tq[0][g]<tq[1][g])i=1;
         if(tq[0][g]==tq[1][g])
         {
                 if(tq[0][0]>tq[1][0])i=2;
                 if(tq[0][0]<tq[1][0])i=3;
                 if(tq[0][0]==tq[1][0])i=4;
         }
            switch(i)
         {
         case 0:money=money+200;break;
         case 1:money=money-200;for(a=0;a<g;a++)tq[1][a]=tq[1][a+1];break;
         case 2:money=money+200;for(a=0;a<g;a++)tq[1][a]=tq[1][a+1];for(e=0;e<g;e++)tq[0][e]=tq[0][e+1];break;
         case 3:money=money-200;for(a=0;a<g;a++)tq[1][a]=tq[1][a+1];break;
         case 4:
                 {
                 if(tq[0][g]>tq[1][0])money=money+200;
                 if(tq[0][g]==tq[1][0])money=money+0;
                 if(tq[0][g]<tq[1][0])money=money-200;
                 for(a=0;a<g;a++)tq[1][a]=tq[1][a+1];
                 break;
                 }
         }
}
if(tq[0][0]>tq[1][0])money=money+200;
if(tq[0][0]==tq[1][0])money=money+0;
if(tq[0][0]<tq[1][0])money=money-200;
c[m]=money;
}
for(m=0;m<d;m++)printf("%d\n",c[m]);//?????????????
}