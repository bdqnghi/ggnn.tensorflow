int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
main()
{int y1,m1,d1;
 int y2,m2,d2;
int sum=0;
     scanf("%d %d %d",&y1,&m1,&d1);
     scanf("%d %d %d",&y2,&m2,&d2);
     m1=m1-1;
     m2=m2-1;
         for(;;)
{          if(y1==y2&&m1==m2&&d1==d2)
                       break;
sum++;        
d1++;
       if ((y1%4==0&&y1%100!=0)||y1%400==0)
                    month[1]=29;
         else
                     month[1]=28; 
        if(d1>month[m1])
                 {
                   m1++; 
                   d1=1;
                 }
          if(m1==12)
          {   y1++;
                m1=0;
}

          
}
printf("%d",sum);
        
}
