main()
{
    int a[3],leap=1,day;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    if((((a[0]%4)&&!(a[0]%100)))||(a[0]%400))
         leap=0;
    if(a[1]==1) day=a[2];
    if(a[1]==2) day=a[2]+31;
    if(a[1]==3) day=a[2]+59+leap;
    if(a[1]==4) day=a[2]+90+leap;
    if(a[1]==5) day=a[2]+120+leap;;
    if(a[1]==6) day=a[2]+151+leap;
    if(a[1]==7) day=a[2]+181+leap;
    if(a[1]==8) day=a[2]+212+leap;
    if(a[1]==9) day=a[2]+243+leap;
    if(a[1]==10) day=a[2]+273+leap;
    if(a[1]==11) day=a[2]+304+leap;
    if(a[1]==12) day=a[2]+334+leap;
    printf("%d",day);
   }