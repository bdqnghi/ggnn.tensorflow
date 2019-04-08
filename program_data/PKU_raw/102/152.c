int comp(const void*a,const void*b){
    return *(float*)a-*(float*)b;
    }

int main(){
    int n,count1=0,count2=0,i,j;
    float num,a[40],b[40],temp;
    char string[10];
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%s",string);  
        scanf("%f",&num);
        if(string[0]=='m')
             a[count1++]=num;
        else if(string[0]=='f')
             b[count2++]=num;
                             
    }
    //qsort(a,count1,sizeof(float),comp);
    //qsort(b,count2,sizeof(float),comp);
    for(i=0;i<=count1-2;i++)
        for(j=0;j<=count1-2-i;j++)
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;                
            }
    for(i=0;i<=count2-2;i++)
        for(j=0;j<=count2-2-i;j++)
            if(b[j]<b[j+1]){
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;                
            }
    for(i=0;i<=count1-1;i++)
        printf("%.2f ",((float)(a[i])));
    for(i=0;i<=count2-2;i++)
        printf("%.2f ",((float)(b[i])));
    printf("%.2f",((float)(b[count2-1])));
    printf("\n");
    
    return 0;
    }