int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum1=0,sum2=0,sum;
    int i;
    sum1=(a-1)/4-(a-1)/100+(a-1)/400+a-1;
    for(i=1;i<b;i++){
       if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			sum2 += 3;	
		} else if (i == 4 || i ==6 || i == 9 || i==11){
			sum2 += 2;
		} else if(i == 2){
                     if(a%400==0||(a%4==0&&a%100!=0)){
                           sum2+=1;}
                     else{
                           sum2+=0;}
                  }
    }
    sum=sum1+sum2+c;
    int x;
    x=sum%7;
    switch(x)
    {
        case 1:
            printf("Mon.");
            break;
        case 2:
            printf("Tue.");
            break;
        case 3:
            printf("Wed.");
            break;
        case 4:
            printf("Thu.");
            break;
        case 5:
            printf("Fri.");
            break;
        case 6:
            printf("Sat.");
            break;
        case 0:
            printf("Sun.");
            break;
    }
    return 0;
}