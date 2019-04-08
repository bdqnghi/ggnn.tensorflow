int main()
{
    int k1=0,k2=0,i,a1[250],b1[250],sum[251],lena,lenb,max;
    char a[250],b[250];
    
    memset(a1,0,sizeof(a1));
    memset(b1,0,sizeof(b1));
    memset(sum,0,sizeof(sum));
    
    cin.getline(a,200,'\n');
    cin.getline(b,200,'\n');
    
    while(a[k1]=='0') k1++;
    while(b[k2]=='0') k2++;
    for (lena=0;a[lena]!='\0';lena++); 
    for (lenb=0;b[lenb]!='\0';lenb++);
   
    
    if((k1!=lena)||(k2!=lenb))
    {
    for (i=lena-1;i>=k1;i--) a1[lena-i-1]=a[i]-'0';
    for (i=lenb-1;i>=k2;i--) b1[lenb-i-1]=b[i]-'0';
   
    lena=lena-k1;
    lenb=lenb-k2;
    if (lena>lenb) max=lena; else max=lenb;}
    else 
    {a1[0]=0;b1[0]=0;max=1;}

  
    
    for (i=0;i<max;i++)
    {
        sum[i]=sum[i]+a1[i]+b1[i]; 
        if (sum[i]>=10)
          {sum[i]=sum[i]-10;
           sum[i+1]++;
          }

    }
    
    if (sum[max]!=0) max++;
    for (i=max-1;i>=0;i--) cout<<sum[i]; 
    
    return 0;
}
    
     
        
    
