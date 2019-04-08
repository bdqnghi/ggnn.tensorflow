
int main()
{   
    int i,n;
    double a,b,c,x1,x2,y,z;
    scanf ("%d",&n);
    for (i=0;i<n;i++) 
 {
    scanf("%lf %lf %lf",&a,&b,&c);
    y=b*b-4*a*c;
    
        if (a==0)
        printf ("error\n");
        else
  {
            if (b==0)
            {   if (y>0)
                   {x1=(sqrt(b*b-4*a*c))/(2*a);
                    x2=(sqrt(b*b-4*a*c))/(2*a);
                    printf("x1=%.5f;x2=%.5f\n",x1,x2);}
                else
                 {if(y==0)
                     {x1=(sqrt(b*b-4*a*c))/(2*a);
                      x2=(sqrt(b*b-4*a*c))/(2*a);
                      printf("x1=x2=%.5f\n",x1);}
                    else
                   {z=sqrt(-y)/(2*a);
                   printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",b,z,b,z);}
                 }
            }
            else
             {if (y>0)
               {x1=(-b + sqrt(b*b-4*a*c))/(2*a);
                x2=(-b - sqrt(b*b-4*a*c))/(2*a);
                printf("x1=%.5f;x2=%.5f\n",x1,x2);}
             else
               {if(y==0)
                   {x1=(-b + sqrt(b*b-4*a*c))/(2*a);
                    x2=(-b - sqrt(b*b-4*a*c))/(2*a);
                    printf("x1=x2=%.5f\n",x1);}
                else
                    {x1=(-b)/(2*a);
                     x2=(-b)/(2*a);
                     z=sqrt(-y)/(2*a);
                     printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,z,x2,z);}
             }
  }  
 } }

    return 0;
}
