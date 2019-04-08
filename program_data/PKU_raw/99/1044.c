int main () 
{int n,i,s;
double a,b,c,d;
a=b=c=d=0;
char l='%';
scanf ("%d",&n);
for (i=0;i<n;i++)
{scanf ("%d",&s);
if (s<=18) a++;
else if (s<=35) b++;
else if (s<=60) c++;
else d++;}
a=a/n*100;
b=b/n*100;
c=c/n*100;
d=d/n*100;
printf ("1-18: %.2lf%c\n",a,l);
printf ("19-35: %.2lf%c\n",b,l);
printf ("36-60: %.2lf%c\n",c,l);
printf ("60??: %.2lf%c\n",d,l);
return 0;
}
