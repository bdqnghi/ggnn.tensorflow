int main()
{
 char str[101];
 int a[101],sh[100];
 int i1,i2,i3,i4,i5,len,yu=0;
 scanf("%s",str);
 len=strlen(str);
 for(i1=0;i1<=len-1;i1++)
 {
  a[i1]=str[i1]-'0';
 }
 for(i2=0;i2<=len-1;i2++)
 {
  sh[i2]=(a[i2]+yu*10)/13;
  yu=(a[i2]+yu*10)%13;
 }
// printf("%d",yu);
 if(len==1)
 printf("%d\n%d\n",0,a[0]);
 else if((len==2)&&(a[0]==1)&&(a[1]<=2))
 printf("%d\n%d%d\n",0,a[0],a[1]);
 else  
{
	if(a[1]==0)
   {
	 for(i4=2;i4<=len-1;i4++)
	 { 
	   if(i4==(len-1))
	   printf("%d\n",sh[i4]);
	   else
	   printf("%d",sh[i4]);
	 }
   }
  else
   {
	 for(i5=1;i5<=len-1;i5++)
	 {
       if(i5==(len-1))
	   printf("%d\n",sh[i5]);
	   else
	   printf("%d",sh[i5]);
	 }
   }
 printf("%d",yu);
 }

}

