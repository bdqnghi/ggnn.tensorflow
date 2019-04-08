

int number;
char roms[MAXN][MAXN];

void days_go();
int count();

int main()
{
    int renshu;
    int iter;
    int days;
    scanf("%d",&number);
    for(iter = 0 ; iter != number ;++iter)
    {
        scanf("%s",roms[iter]);
    }
    scanf("%d",&days);
    for(iter = 1 ; iter != days ; ++iter)
    {
        days_go();
    }
    renshu = count();
    printf("%d",renshu);
    return 0;
}

void days_go()
{
    int iterout , iterin;
    int i,j;
    for(iterout = 0 ; iterout != number ; ++iterout)
    {
        for(iterin = 0 ; iterin != number ; ++iterin)
        {
     if('@' == roms[iterout][iterin])
        {
         i= iterout-1;
      if(-1 !=j)
         {
       j= iterin;
          if('.' == roms[i][j])
         {
       roms[i][j] = '!';
                    }
                }
     i = iterout;
      j= iterin-1;
    if(-1 != j)
        {
              if('.' == roms[i][j])
             {
            roms[i][j] = '!';
                    }
           }
     j= iterin+1;
        if(number != j)
     {
   if('.' == roms[i][j])
        {
     roms[i][j] = '!';
          }
    }
    i= iterout+1;
  if(number != i)
            {
                    j = iterin;
            if('.' == roms[i][j])
             {
         roms[i][j] = '!';
     }
}
    }
    }
    }
    for(iterout = 0 ; iterout != number ; ++iterout)
    {
   for(iterin = 0 ; iterin != number ; ++iterin)
    {
 if('!' == roms[iterout][iterin])
      {
                roms[iterout][iterin] = '@';
       }
  }
  }
}

int count()
{
 int total = 0;
 int iterout , iterin;
 for(iterout = 0 ; iterout != number ; ++iterout)
    {
     for(iterin = 0 ; iterin != number ; ++iterin)
 {
 if('@' == roms[iterout][iterin])
 {
      ++total;
     }
  }
}
    return total;
}
