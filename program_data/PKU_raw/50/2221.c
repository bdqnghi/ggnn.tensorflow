int main ()
{

    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int b[12];
    b[0]=13;
    for (int i=1;i<13;i++)
    {b[i]=b[i-1]+a[i-1];
        }
int s;
    scanf ("%d",&s);
    for (int i=0;i<12;i++)
    {  if ((b[i]+s-1)%7==5)
        printf ("%d\n",i+1);
        
        }
        
        
        

    
    
    }
