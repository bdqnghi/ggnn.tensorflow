int main ()
{
    int a[5][5];
    int i,j,k,r,c[5],m,temp=0,d=0,count=0;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        scanf ("%d",&a[i][j]);
    }
    for (j=0;j<5;j++)
    {
        m=a[j][0];
        c[d]=0;
        for (i=1;i<5;i++)
        {
            if (a[j][i]>m)
            {
                         m=a[j][i];
                         c[d]=i;                          
            }
            
        }//printf ("%d %d\n",j,c[d]);
        d++;
    } 
        for (i=0;i<5;i++)
         {
             for (k=0;k<5;k++)
             {
             if (a[k][c[i]]<a[i][c[i]])
             {
             temp=1;
             //printf ("%d %d\n",k,c[i]);
             break;
             }
             }
             if (temp==0)
         {printf ("%d %d %d\n",i+1,c[i]+1,a[i][c[i]]); 
         count=1;}
             temp=0;
         }
         if (count==0)
         printf ("not found");
               
        return 0;
}
