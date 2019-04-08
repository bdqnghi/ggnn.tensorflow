int main()
{
int a=0,b=0,length=0;                              
long long dec = 0;
char origin[100],final[100];            //???char origin?a???~int temp?a???~dec?????~int answer?b???~char final?b???                   
int temp[100]={0},answer[100]={0};
cin>>a>>origin>>b;

length=strlen(origin);

for(int i=length-1;i>=0;i--)          //char origin?a???~int temp?a???
   {
  if(origin[i]>='a'&&origin[i]<='z')
            temp[i]=origin[i]-87;
  else if(origin[i]>='A'&&origin[i]<='Z')
       temp[i]=origin[i]-55;
  else
   temp[i]=origin[i]-48;
    }





for(int i=length-1;i>=0;i--)       //int temp?a???~dec?????
  {

 dec=dec+temp[i]*pow((double)a,(length-i-1));

  }
//cout<<dec;
 
int j=0;
   while((dec/b)!=0)            //dec?????~int answer?b????????
    {
        answer[j]=dec%b;
   dec=dec/b;
j++;
    }
   answer[j]=dec%b;

  for(int k=j;k>=0;k--)           //int answer?b???~char final?b??????????
  {
      if(answer[k]>=10&&answer[k]<=35)
 {
 final[k]=(char)(answer[k]+55);
 cout<<final[k];
      }
 else
 cout<<answer[k];
  
  }




}

