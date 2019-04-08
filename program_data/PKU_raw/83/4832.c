int main()
{
int n,d=0;
float gpa=0;
scanf("%d",&n);
int c[n],p[n];
float gp[n];
for (int i=0;i<n;i++)
   {
   scanf("%d",&c[i]);
   d+=c[i];
   }
for (int j=0;j<n;j++)
   {
   scanf("%d",&p[j]);
   if (p[j]>89) gp[j]=4;
    else if (p[j]>84) gp[j]=3.7;
     else if (p[j]>81) gp[j]=3.3;
      else if (p[j]>77) gp[j]=3;
       else if (p[j]>74) gp[j]=2.7;
        else if (p[j]>71) gp[j]=2.3;
         else if (p[j]>67) gp[j]=2;
          else if (p[j]>63) gp[j]=1.5;
           else if (p[j]>59) gp[j]=1;
            else gp[j]=0;
   gpa+=c[j]*gp[j];
   }
gpa=gpa/d;
printf("%.2f",gpa);
}
