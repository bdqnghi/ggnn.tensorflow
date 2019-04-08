/*************************************************************************
* Project: ???
* Function:
*************************************************************************
* Author: S.H
* Date: 2011-12-31
*************************************************************************
*
* Copyright 2011
*
************************************************************************/
int comp(const void*a,const void*b)
{
    return (int*)a-(int*)b;
}
int main(void)
{
    int result[301],i=1,j;
    scanf("%d",&result[0]);
    while(scanf(",%d",&result[i++])==1);
    //for(j=0;j<i;j++)printf("[%d]",result[j]);
    qsort(result,i,sizeof(result[0]),comp);
    if(find2nd(i-1,result)==-1)
    printf("No");
    else
    printf("%d",find2nd(i-1,result));

    return 0;
}
int find2nd(int num,int result[])
{
    int k,second=-1,max = result[0];
    if(num==1)return -1;
    for(k=0; k<num; k++)
    {
        if(result[k]>max)
        {
            second=max;
            max=result[k];
        }
        else if((result[k]>second)&&(result[k]<max))
            second=result[k];
    }
    //printf("second=%d,max=%d",second,max);
    if(second==max)return -1;
    else return second;
}
