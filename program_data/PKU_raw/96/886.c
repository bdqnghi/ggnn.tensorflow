int main()
{
char str[101];
int answer[101];
memset(answer,0,sizeof(answer));
int p,q,flag=0,j,i,k;
cin>>str;
i=0;
for(j=0;j<strlen(str);j++)
   {
   p=0;
   for(k=i;p<13;k++)
       {if(k>=strlen(str))
          break;
       p=p*10+str[k]-'0';                                                 //???????str???????????????13 
	   }
   j=k-1;                                                                  //????????????answer?????? 
   answer[j]=p/13;                  
   p=p%13;
   q=p;
   for(int k=j;k>=i;k--)
     {
      str[k]=p%10+'0';                                                      //??str?????????????????0?? 
	  p=p/10;
	  if(p==0&&str[k-1]=='0')
	     {
		 i=k-1;
		 break;}
	  }
   }
for(i=0;i<j;i++)
   {
   if(answer[i]!=0)                                                         //???0???????answer 
      flag=1;
   if(flag)
     cout<<answer[i];
	 }
if(!flag)
   cout<<0;                                                                //????13??? 
cout<<endl<<q<<endl;                                                        //q??? 
return 0;
}