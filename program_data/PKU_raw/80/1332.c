//?? - ??(10-2) ???????????
int main(void)
{
    int om[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int nom[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int sy, sm, sd, s=0;
    int ey, em, ed, e=0;
    int d, i;
    scanf("%d %d %d", &sy, &sm, &sd);

    if((sy%4==0&&sy%100!=0)||(sy%400==0))
    {
        for(i=0; i<sm-1; i++)
            s+=nom[i];
        s+=sd;
    }
    else
    {
        for(i=0; i<sm-1; i++)
            s+=om[i];
        s+=sd;
    }
   // printf("%d\n", s);
    
    scanf("%d %d %d", &ey, &em, &ed);
    if((ey%4==0&&ey%100!=0)||(ey%400==0))
    {
        for(i=0; i<em-1; i++)
            e+=nom[i];
        e+=ed;
    }
    else
    {
        for(i=0; i<em-1; i++)
            e+=om[i];
        e+=ed;
    }


    for(i=sy;i<ey;i++)
    {
         if((i%4==0&&i%100!=0)||(i%400==0))
         e+=366;
         else
         e+=365;
    }
    printf("%d", e-s);
    return 0;
}
