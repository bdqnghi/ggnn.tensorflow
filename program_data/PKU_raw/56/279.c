int main()
{
    int num[5]={'\0'};
    long number;
    int i,place=1;

    scanf("%ld",&number);
    do {
    place=1;
    for(i=0;i<=4;i++) {
        num[i]=number%10;
        number/=10;
        if(number!=0) 
            place+=1;
    }
    for(i=0;i<place;i++) 
        printf("%d",num[i]);
    printf("\n");
    scanf("%ld",&number);
    }while(number!=0);
    return 0;
}
        