int main()
{
 long int input,output,n,ex1[20000],ex2[20000],sum=0,s[20000],f[20000],g[20000],out[20000];  //?????????
 char str1[20000],str2[20000],str3[20000];                                                   //?????????
 int i,j,k,l=0,m,h,o,p;                                                                      //????????
 cin>>input>>str1>>output;                                                                  //??“????” “????” “????”
 n=strlen(str1);                                                                           //??????????
 for(i=0;i<n;i++)                                                                          
 {ex1[i]=str1[i];}                                                                            //????????????
 for(j=0;j<n;j++)
 {if((ex1[j]>=48)&&(ex1[j]<=57))
 ex2[j]=ex1[j]-48;
 else if((ex1[j]>=65)&&(ex1[j]<=90))
  ex2[j]=ex1[j]-55;
 else if((ex1[j]>=97)&&(ex1[j]<=122))
  ex2[j]=ex1[j]-87;
 }                                                                                          //??ascii????0——z?????????
 for(k=0;k<n;k++)
 {sum=sum+ex2[k]*pow((double)input,n-1.0-k);}                                              //??????????????
 s[0]=sum;
 while(s[l]>0)
 {s[l+1]=s[l]/output;
 f[l]=s[l]%output;
 l=l+1;}                                                                                  //??????????????????????????????
 for(m=0;m<l;m++)
  g[m]=f[l-m-1];
 for(h=0;h<m;h++){
  if((g[h]>=0)&&(g[h]<=9))
   out[h]=g[h]+48;
  else if((g[h]>=10)&&(g[h]<=35))
   out[h]=g[h]+55;
 }                                                                                      //??acsii??????????????????????????
 for(o=0;o<m;o++)
  str3[o]=out[o];                                                                     //??acsii????????????????????????????????
 for(p=0;p<m;p++)
  cout<<str3[p];
 if(sum == 0)
  cout<<0;
  //????
 return 0;
}





