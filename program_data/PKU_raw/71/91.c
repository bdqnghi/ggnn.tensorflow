int main()
{
    int i,j,k,m,n;
    int *y,*m1,*m2;
    y=(int *)malloc(200*sizeof(int));
    m2=(int *)malloc(200*sizeof(int));
    m1=(int *)malloc(200*sizeof(int));
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d %d %d",y+i,m1+i,m2+i);
    }
    void judge(int x,int y,int z);
    for(i=0;i<n;i++)
    {
                    if(i>0)
                    {
                           printf("\n");
                    }
                    judge(*(y+i),*(m1+i),*(m2+i));
    }
    return 0;
}

void judge(int x,int y,int z)
{
     int i,j,a;
     int p(int x);
     int r(int x);
     if((x%4==0&&x%100!=0)||x%400==0)
     {
                                     i=r(y);
                                     j=r(z);
     }
     else
     {
         i=p(y);
         j=p(z);
     }
     if(i>j)
     {
            a=(i-j)%7;
     }
     else
     {
         a=(j-i)%7;
     }
     if(a==0)
     {
             printf("YES");
     }
     else
     {
         printf("NO");
     }
}

int p(int x)
{
     int i;
     switch(x)
     {
               case 1:i=0;break;
               case 2:i=31;break;
               case 3:i=59;break;
               case 4:i=90;break;
               case 5:i=120;break;
               case 6:i=151;break;
               case 7:i=181;break;
               case 8:i=212;break;
               case 9:i=243;break;
               case 10:i=273;break;
               case 11:i=304;break;
               case 12:i=334;break;
     }
     return i;
}

int r(int x)
{
     int i;
     switch(x)
     {
               case 1:i=0;break;
               case 2:i=31;break;
               case 3:i=59+1;break;
               case 4:i=90+1;break;
               case 5:i=120+1;break;
               case 6:i=151+1;break;
               case 7:i=181+1;break;
               case 8:i=212+1;break;
               case 9:i=243+1;break;
               case 10:i=273+1;break;
               case 11:i=304+1;break;
               case 12:i=334+1;break;
     }
     return i;
}