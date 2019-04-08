main()
{char str1[250]={0},str2[250]={0},str[251]={0},str3[251]={0};
int a,b,c,i,j,k,l,m,n,h,g,f,o;
scanf("%s",str1);
scanf("%s",str2);
a=strlen(str1);
b=strlen(str2);
if(a==b){
for(i=0;i<a;i++){
str[i]=str1[i]+str2[i]-'0';
}
}
if(a>b){
for(j=0,k=a-b;j<=b-1,k<=a-1;j++,k++){

str[k]=str1[k]+str2[j]-'0';}
for(k=0;k<a-b;k++){
str[k]=str1[k];}

}
if(a<b)
{
for(l=b-1,m=a-1;l>=b-a,m>=0;l--,m--){
str[l]=str1[m]+str2[l]-'0';}
for(l=0;l<b-a;l++){
str[l]=str2[l];}
}
for(n=(a>=b)?a:b-1;n>=1;n--){
if(str[n]>'9'){
str[n]=str[n]-10;
str[n-1]=str[n-1]+1;}}
if(str[0]>'9')
{n=(a>=b)?a:b;
for(h=1;h<n;h++)
{str3[h+1]=str[h];
}
str3[1]=str[0]-10;
str3[0]='1';printf("%s",str3);}
if(str[0]<='9')
{for(g=0;g<strlen(str)-1;g++)
{if(str[0]=='0')
{for(f=0;f<strlen(str)-g-1;f++)
str[f]=str[f+1];str[strlen(str)-g-1]='\n';
}
if(str[0]!='0')
{
break;}}printf("%s",str);} 










 
 
      }            
