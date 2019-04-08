main()
{
float m[100][3];
double x1,x2,delt,a,b,c,s,t;
int n,i,j;
scanf("%d",&n);
for(i=0;i<=n-1;i++)
     {
     for(j=0;j<=2;j++)
           {
           scanf("%f",&m[i][j]);
           }
     }
for(i=0;i<=n-1;i++)
     {
     a=(double)m[i][0];
     b=(double)m[i][1];
     c=(double)m[i][2];
     delt=(double)(b*b-4*a*c);
     if(delt>0)
           {
            x1 = (-b+1+sqrt(b*b-4*a*c))/(2*a)-1/(2*a);
            x2 = (-b+1-sqrt(b*b-4*a*c))/(2*a)-1/(2*a);
            printf("x1=%.5f;x2=%.5f\n",x1,x2);
           }
     if(delt==0)
           {
            x1 = (-b+1+sqrt(b*b-4*a*c))/(2*a)-1/(2*a);
            x2 = (-b+1-sqrt(b*b-4*a*c))/(2*a)-1/(2*a);
            printf("x1=x2=%.5f\n",x1);
           }
     if(delt<0)
           {
            s=((-b+1)/(2*a))-1/(2*a);
            t=(sqrt(4*a*c-b*b)/(2*a));
            printf("x1=%.5f+%.5fi;x2=%.5f%.5fi\n",s,t,s,-t);
           }
     }
}
