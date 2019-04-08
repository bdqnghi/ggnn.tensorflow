int main()
{
 char str[500],c;
 char p[50]="";
 int i=0,j=0,max=0,min=50,l1=0,l2=0;
    gets(str);
 do
 {
  c=str[i];
  if(c==' '||c=='\0')
  {
   if(j<min){min=j;l2=i-j;}
   if(j>max){max=j;l1=i-j;}   
   j=0;   
  }
  else
   j++;
  i++;
 }while(c!='\0');
 memcpy(p,str+l1,max);
 printf("%s\n",p);
 memcpy(p,"",50);
 memcpy(p,str+l2,min);
 printf("%s\n",p);
 return 0;
}
