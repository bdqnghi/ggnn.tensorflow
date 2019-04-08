//????:???????????
//?????2011?11?1?
//????????
int main()                                  //?????
{
int i;                                     //????
char str1[80],str2[80];                    //?????
cin.getline(str1,sizeof(str1));
cin.getline(str2,sizeof(str2));                                 //?????
for(i=0;str1[i]!='\0';i++)
 {
  if(str1[i]>='a'&&str1[i]<='z')                 //????1?????????
   str1[i]=str1[i]-32;
  if(str1[i]>='A'&&str1[i]<='Z')
            continue;
 }
     for(i=0;str2[i]!='\0';i++)                   
 {
  if(str2[i]>='a'&&str2[i]<='z')
      str2[i]=str2[i]-32;                       //????2?????????

  if(str2[i]>='A'&&str2[i]<='Z')
            continue;
}
if(strcmp(str1,str2)>0)
cout<<">"<<endl;                            //?????
if(strcmp(str1,str2)==0)
cout<<"="<<endl;                             //?????
if(strcmp(str1,str2)<0)
cout<<"<"<<endl;
return 0;
}