int main()
{
   char numa[100],numb[100];//???a???b??
   long na[100],nb[100];
   long a,b;
   cin>>a>>numa>>b;
   long digit_a=0;
   long m=1,j;
   while(numa[digit_a]!=0)
      digit_a++;
   //??a??????

   for(j=1;j<digit_a;j++)
    m=m*a;
   long i;
   long numd=0;
   for(i=0;i<digit_a;i++)
   {
    if((numa[i]>='a')&&(numa[i]<='z'))
     na[i]=numa[i]-87;
    if((numa[i]>='A')&&(numa[i]<='Z'))
     na[i]=numa[i]-55;
    if((numa[i]>='0')&&(numa[i]<='9'))
     na[i]=numa[i]-48;
    numd=numd+m*na[i];
    m=m/a;
   }
   //???????numd
   if(numd==0)
     cout<<0<<endl;
   long k=0;
   while(numd!=0)
   {
      nb[k]=numd%b;
   numd=numd/b;
   if((nb[k]>=0)&&(nb[k]<=9))
    numb[k]=nb[k]+48;
   else
    numb[k]=nb[k]+55;
   k++;
   }
   //k?b??????
   long t;
   for(t=k-1;t>=0;t--)
    cout<<numb[t];
   return 0;
}


