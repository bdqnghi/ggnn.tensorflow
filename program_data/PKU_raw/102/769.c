int main()
{
    char sex[10];
    int n=0,count=0,count1=0,count2=0;
    int boy_num=0,girl_num=0;
    double temp,height,boy[40],girl[40];
    scanf("%d",&n);
    
    for(count=0;count<n;++count)  
    {
        scanf("%s%lf",sex,&height); 
        if(!strcmp(sex,"male")){
            boy[boy_num]=height;
            boy_num++;    
        }else {
            girl[girl_num]=height;
            girl_num++;
        }
    }
    //????  ?? 
    for(count1=0;count1<boy_num;++count1)
    {
        for(count2=0;count2<boy_num-count1-1;++count2)  
        {
            if(boy[count2]>boy[count2+1])
            {
                temp = boy[count2];
                boy[count2]=boy[count2+1];
                boy[count2+1] = temp;
            }    
        }  
    }
     //????  ??  
    for(count1=0;count1<girl_num;++count1)
    {
        for(count2=0;count2<girl_num-count1-1;++count2)  
        {
            if(girl[count2]<girl[count2+1])
            {
                temp = girl[count2];
                girl[count2]=girl[count2+1];
                girl[count2+1] = temp;
            }    
        }  
    }
    for(count=0;count<boy_num;++count)
    {
        printf("%.2f ",boy[count]);    
    }
    for(count=0;count<girl_num-1;++count)
    {
        printf("%.2f ",girl[count]);    
    }
    printf("%.2f",girl[count]);
}
