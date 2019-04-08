int main(){
   int i,j,s,a,b,e,h;
     a=0;b=0;
     e=0;h=0;
   double m,c,n;
   double x[100],y[100];
   char z[100][10];
   scanf("%d",&s);
   for(i=0;i<s;i++)
    {  scanf("%s %lf",z[i],&m);
       if(strcmp(z[i],"male")==0)
        {  x[e]=m;
            a++;e++;}
        else{y[h]=m;
             b++;h++;}
     }
       for(i=a;i>0;i--)
        for(j=0;j<i-1;j++)
       {   if(x[j]>x[j+1])
              { c=x[j];
                x[j]=x[j+1];
                x[j+1]=c;
                }
       } 
        for(i=b;i>0;i--)
        for(j=0;j<i-1;j++)
       {   if(y[j]<y[j+1])
              { c=y[j];
                y[j]=y[j+1];
                y[j+1]=c;
                }
       }
          for(i=0;i<a;i++)
            printf("%.2lf ",x[i]);
          for(i=0;i<b;i++)
           {if(i!=b-1) printf("%.2lf ",y[i]);
             else{printf("%.2f",y[i]);}
       } return 0;
}