int sushu(int i)
{          double c;
           int e; 
           int l=0;   
           c=sqrt(i);
           for (e=2;e<=c;e++)
          { if ((i)%e==0)
           break;} 
           if (e>c)
          return 1;
          else
          return 0;
          
}
int main ()
{   int d,i;
    scanf ("%d",&d);
    if (d>4)
    {for (i=5;i<=d;i++)
    {   
           
           if (sushu(i)==1 )
    {      if (sushu(i-2)==1)
          { printf ("%d %d\n",i-2,i); }}
        } 
        }

else 
printf ("empty");
}
