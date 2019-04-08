int main()           //5
{
 double m=0,n=0,sum=0;
 char a[100]="0";
 int b[100];
 char c[100]="0";       //10
 cin>>m;
 cin>>a[0];
 for(int i=1;i<100;i++)
 {
  if((a[i]=getchar())==' ')break;        //15
 }
 cin>>n;
 int longa=strlen(a);
 for(int j=0;j<(longa-1);j++)
 {                                            //20
  b[j]=a[j];
  if(b[j]>47&&b[j]<58)sum=sum+(b[j]-48)*pow(m,(longa-j-2));
  if(b[j]>64&&b[j]<91)sum=sum+(b[j]-55)*pow(m,(longa-j-2));
  if(b[j]>96&&b[j]<123)sum=sum+(b[j]-87)*pow(m,(longa-j-2));
 }                         //25
 int z=0,x=0,sum2=sum,n2=n;
 do
 {
  z=sum2%n2;
  sum2=sum2/n2;                //30
  if(z>=0&&z<10)c[x]=z+48;
  if(z>=10&&z<37)c[x]=z+55;
  x++;
 }
 while(sum2!=0);                    //35
 int longc=strlen(c);
 for(int y=1;y<=longc;y++)
 {
  cout<<c[longc-y];
 }                                        //40
 return 0;
}