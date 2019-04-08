int main()
{
    int time1[10000]={0},time2[10000]={0},p[1001]={0},num,i=0,j=0,k,max=0,temp=0;
    char timein[100000]={0},timeout[100000]={0};
    gets(timein);gets(timeout);
    for(i=0;timein[i]!=0;i++)
    {
                       if(timein[i]>'9'||timein[i]<'0')continue;
                       temp*=10;temp+=timein[i]-'0';
                       if(timein[i+1]>'9'||timein[i+1]<'0'){time1[j]=temp;j++;temp=0; continue;}
    }     
    temp=0;cout<<j<<' ';j=0;
    for(i=0;timeout[i]!=0;i++)
    {
                       if(timeout[i]>'9'||timeout[i]<'0'){continue;}
                       
                       temp*=10;temp+=timeout[i]-'0';
                       if(timeout[i+1]>'9'||timeout[i+1]<'0'){time2[j]=temp;j++;temp=0; continue;}
    }
    for(i=0;i<=j;i++)
          for(k=time1[i];k<time2[i];k++)p[k]++;
    for(j=0;j<1001;j++)if(max<p[j]){max=p[j];}
    cout<<max;
    getchar();getchar();
    return 0;
}
    
