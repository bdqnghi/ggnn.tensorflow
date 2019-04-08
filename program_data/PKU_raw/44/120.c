//****************
//*1000010538    *
//*??          *
//****************
int reverse(int);
int main()
{
   int i,a[6];                              //????????????
   for(i=0;i<6;i++)
  {
    cin>>a[i];
       a[i]=reverse(a[i]);
    cout<<a[i]<<endl;
   }
   return 0;
}
 int reverse(int num)  
 {
   char str[10]={0};
   int len=0,i;
   if(num!=0)                                         //?????
   {
      for(i=0;num!=0;i++)
	  {
	       str[i]=num%10+'0';                                //???????????????
                 num=num/10;
	  }
      len=strlen(str);
	  for(i=0;i<len;i++)
	  num=num+(str[i]-'0')*pow(10.0,len-1-i);                //????????????????
	  return(num);
   }
     if(num==0)                                       //????0
     return 0;                                           //????0
   
 }
  
    

