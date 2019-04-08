int main()
{
    int y, m, d, i, sum, n=0, k[13];
    scanf("%d %d %d" , &y, &m, &d);
    k[0]=0;
    k[1]=k[3]=k[5]=k[7]=k[8]=k[10]=k[12]=31;
    k[4]=k[6]=k[9]=k[11]=30;
    if(y%4)
    {
       if(y%100)
       {
            if(y%400)
            {
                k[2]=28;   
            }
            else
            {
                k[2]=29;
            }
       }
       else
       {
           k[2]=28;
       }
    }
    else
    {
        k[2]=29;
    }
     for(i=0; i<m; i++)
     {
        n=n+k[i];
     }
     sum=n+d;
     printf("%d\n", sum); 
     return 0;
}
