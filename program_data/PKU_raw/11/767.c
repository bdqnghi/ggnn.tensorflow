int r(int x)
{ if(x%4!=0||(x%100==0&&x%400!=0))
     return(0);
     else
     return(1);
}

main()
{   int m,y,i,j,d,s,t;
    scanf("%d %d %d",&m,&y,&d);
    int a[13];
    a[1]=31;a[3]=31;a[4]=30;a[5]=31;a[6]=30;a[7]=31;a[8]=31;a[9]=30;a[10]=31;a[11]=30;a[12]=31;
                    
    if(r(m)==1)
       a[2]=29;
    else
       a[2]=28;
    for(s=0,i=1;i<y;i++)
        s=s+a[i];
      
       s=s+d;
      
       printf("%d",s);
       

  getchar();
  getchar();
  getchar();
  getchar();
      }
