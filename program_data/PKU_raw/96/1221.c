int posi(char*data,int k,int pos)
{
    for (int ii=0; ii<k; ii++)
    {
        if(data[pos+k-ii-1]<10){data[pos+k-ii-2]--;data[pos+k-ii-1]+=10;}
    }
    return 1;
}
int convert(char*data)
{
    int k=strlen(data);
    for (int co=0; co<k ; co++)
        data[co]=data[co]-'0'+10;
    return 0;
}
int compare(char*data1,char*data2,int pos)
{
    int j=strlen(data1),k=strlen(data2);
    if (j<k+pos) return 3;
    if(pos>=1)if(data1[pos-1]>10) return 1;
    for(int i=0;i<k;i++)
    {if(data1[i+pos]>data2[i])return 1;if(data1[i+pos]<data2[i])return 0;}
    return 1;
}
int out(char*data1,char*data2,int pos)
{
    int k=strlen(data2);
    for(int i=0;i<k;i++)
        data1[i+pos]-=data2[i]-10;
    posi(data1, k, pos);
    return 0;
}

int main()
{
    int n;
    char data1[450],data2[450]="13",r[450];
    scanf("%s",data1);
    int j,k;
    j=strlen(data1);
    k=strlen(data2);
    convert (data1);convert(data2);
    int kk;int pp=0;
    for ( kk=0; ;kk++ )
    {
        int pd=0;
        if(compare(data1, data2, kk)==3) break;
        for(;;pd++)
        {
            if(compare(data1, data2, kk)==1) out(data1,data2,kk);
            else break;
        }
        r[kk-pp]=pd+10;if(kk==0&&pd==0) pp++;
    }
    r[kk-pp]=0;
    int w=strlen(r);
    for (int rr=0 ;rr< w; rr++)
    {printf("%d",r[rr]-10);}
    if(w==0) printf("0");
    printf("\n");
    w=strlen(data1);int qq=1;
    for (int rr=0 ;rr< w; rr++)
    {if(qq)if(data1[rr]!=10){printf("%d",data1[rr]-10);qq=0;}else ;else printf("%d",data1[rr]-10);}
    if(qq) printf("0");
    if(w==0) printf("0");
    
}