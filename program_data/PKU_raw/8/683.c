
int a[1000],b[1000],la,lb;
int p;
int c[1000],lc;

void M1 (int m1)
{
     cin >>la>>lb;
     for (int i=1;i<=la;i++)
     cin >>a[i];
     for (int i=1;i<=lb;i++)
     cin >>b[i];
}

void M2(int m2)
{
     for (int i=1;i<=la;i++)
     {
         for (int j=1;j<=la-1;j++)
         {
             if (a[j]>a[j+1])
             {
                p=a[j];
                a[j]=a[j+1];
                a[j+1]=p;
             }
         }
     }
     for (int i=1;i<=lb;i++)
     {
         for (int j=1;j<=lb-1;j++)
         {
             if (b[j]>b[j+1])
             {
                p=b[j];
                b[j]=b[j+1];
                b[j+1]=p;
             }
         }
     }
}

void M3 (int m3)
{
     lc=la+lb;
     for (int i=1;i<=la;i++)
     c[i]=a[i];
     for (int i=1;i<=lb;i++)
     c[la+i]=b[i];
}

void M4 (int m4)
{
     for (int i=1;i<=lc;i++)
     {
         cout <<c[i];
         if (i==lc)
         break;
         cout <<" ";
     }
}
         
int main ()
{
    M1(1);M2(1);M3(1);M4(1);
    return 0;
} 
