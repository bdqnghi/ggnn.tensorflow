void zhuanhuan(char a[])
{
 char t;
 int i,length;
 length=strlen(a);
 for(i=0;i<length/2;i++)
 {
  t=a[i];
  a[i]=a[length-i-1];
  a[length-i-1]=t;
 }
}

void main()
{
 unsigned int i=0;
 int sum=0,a,b; 
 char num_1[100],num_2[100];
 scanf("%d %s %d",&a,num_1,&b);

 while(num_1[i]!='\0')
 {
  if(num_1[i]>='0'&&num_1[i]<='9')
   sum=sum*a+num_1[i]-'0';
  else if(num_1[i]>='A'&&num_1[i]<='Z')
   sum=sum*a+num_1[i]-'A'+10;
  else if(num_1[i]>='a'&&num_1[i]<='z')
   sum=sum*a+num_1[i]-'a'+10;
  i++;
 }
 
 i=0;
 while(sum/b!=0)
 { 
  int yu=sum%b;
  if(yu>=0&&yu<=9)num_2[i]='0'+yu;
  else if(yu>=10)
	  num_2[i]='A'+yu-10;
  sum=sum/b;
 
  i++;

 }
 
 if(sum>=0&&sum<=9)num_2[i]='0'+sum;
 if(sum>=10)num_2[i]='A'+sum-10;

num_2[i+1]='\0';
 zhuanhuan(num_2);
 
 if(num_2[0]!=0)puts(num_2);
 else for(i=1;i<strlen(num_2)-1;i++)printf("%c",num_2[i]);

}