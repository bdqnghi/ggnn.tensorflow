int main()
{
    int y,m,d,n;
    scanf ("%d %d %d",&y,&m,&d);
    if (y%4==0&&y%100!=0||y%400==0)
    {
           switch(m)
           {
           case 1:printf("%d",d);break;
           case 2:printf("%d",31+d);break;
           case 3:printf("%d",60+d);break;
           case 4:printf("%d",91+d);break;
           case 5:printf("%d",121+d);break;
           case 6:printf("%d",152+d);break;          
           case 7:printf("%d",182+d);break;
           case 8:printf("%d",213+d);break;
           case 9:printf("%d",244+d);break;
           case 10:printf("%d",274+d);break;
           case 11:printf("%d",305+d);break;
           case 12:printf("%d",335+d);break;
           }             
    }
    else
        {
           switch(m)
           {
           case 1:printf("%d",d);break;
           case 2:printf("%d",31+d);break;
           case 3:printf("%d",59+d);break;
           case 4:printf("%d",90+d);break;
           case 5:printf("%d",120+d);break;
           case 6:printf("%d",151+d);break;          
           case 7:printf("%d",181+d);break;
           case 8:printf("%d",212+d);break;
           case 9:printf("%d",243+d);break;
           case 10:printf("%d",273+d);break;
           case 11:printf("%d",304+d);break;
           case 12:printf("%d",334+d);break;
           }             
    }
   
    }
