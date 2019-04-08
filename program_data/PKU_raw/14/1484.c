struct Student
{
    int num;
    int chinese;
    int math; 
}sdu[99999];

int main()
{   
    int N,i,j,s,t,m;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d%d%d",&sdu[i].num,&sdu[i].chinese,&sdu[i].math);
        
    for(j=0;j<3;j++){
        for(i=0;i<N-j-1;i++)
            if((sdu[i].chinese+sdu[i].math)>=(sdu[i+1].chinese+sdu[i+1].math)){
                s=sdu[i].num;t=sdu[i].chinese;m=sdu[i].math;
                sdu[i].num=sdu[i+1].num;sdu[i].chinese=sdu[i+1].chinese;sdu[i].math=sdu[i+1].math;
                sdu[i+1].num=s;sdu[i+1].chinese=t;sdu[i+1].math=m;
            }      
    }
    for(i=0;i<3;i++)
    printf("%d %d\n",sdu[N-1-i].num,sdu[N-1-i].chinese+sdu[N-1-i].math);      
}