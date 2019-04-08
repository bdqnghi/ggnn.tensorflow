int main()
{
    int n,len,i,j,k,num[600]={0},flag;
    char chuan[600]={'\0'},cha[600][7]={'\0'},comp[7]={'\0'};
    cin>>n>>chuan;
    len=strlen(chuan);       
    for(i=0;i<=(len-n);i++)
    {
        k=0;
        for(j=i;j<i+n;j++)
        {
            comp[k]=chuan[j];
            k++;
        }     
        j=0;flag=0;
        while(num[j]!=0)
        {
            if(strcmp(comp,cha[j])==0)
            {
                num[j]++;
                flag=1;
                break;
            }
            j++;
        }
        if(flag==0)
        {
            for(k=0;k<n;k++)
               cha[j][k]=comp[k];
            num[j]++;
        }
    }      
    i=0;  while(num[i]!=0){i++;}     len=i;
    for(i=0;;i++)
    {
        if(num[i]==0)  break;
        for(j=1;j<len-i;j++)
        {      
            if(num[j]==0)   break;
            if(num[j-1]<num[j])
            {                
                k=num[j-1];   num[j-1]=num[j];   num[j]=k;
                strcpy(comp,cha[j-1]);    strcpy(cha[j-1],cha[j]);   strcpy(cha[j],comp);
            }
        }
    }                     
    if(num[0]==1)     cout<<"NO"<<endl;
    else{
    i=0;  cout<<num[0]<<endl;
    while(num[i]==num[0]) 
    {
        cout<<cha[i]<<endl;
        i++;
    } 
        }
   
    return 0;
}
