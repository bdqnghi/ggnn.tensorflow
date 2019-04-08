
int main()
{
   char ch1[252],ch2[252],cha1[253],cha2[253],cha3[253];
   int i,j,len1,len2,jin;
   cin>>ch1;
   cin>>ch2;
   len1=strlen(ch1);
   len2=strlen(ch2);
   for(i=0;i<253;i++)
   {
       cha1[i]='0';
       cha2[i]='0';
       cha3[i]='0';
   }
   for(i=0;i<len1;i++)
   {
       cha1[i]=ch1[len1-1-i];

    }
    cout<<endl;
   for(i=0;i<len2;i++)
   {
       cha2[i]=ch2[len2-1-i];

    }
    cout<<endl;
    jin=0;
    for(i=0;i<253;i++)
    {
       if((cha1[i]-'0')+(cha2[i]-'0')+jin>=10)
       {
           cha3[i]='0'+(cha1[i]-'0')+(cha2[i]-'0')+jin-10;jin=1;
       }
       else
       {
           cha3[i]='0'+(cha1[i]-'0')+(cha2[i]-'0')+jin;jin=0;
       }
    }
    for(i=252;i>=0;i--)
    {
        if(cha3[i]!='0')break;
    }
if(i==-1)cout<<'0';
else
{
    for(j=i;j>=0;j--)
    cout<<cha3[j];
}

    return 0;
}

