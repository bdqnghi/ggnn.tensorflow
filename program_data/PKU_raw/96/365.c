const int chushu=13;
int main()
{
char n[101],shang[100];
int a,i;
scanf("%s",n);
if (n[1]=='\0') {printf ("0\n%s",n);}
else if (n[0]=='1' && n[1]<'3' && n[2]=='\0') {printf ("0\n%s",n);}
else
{
  a=n[0]-'0';
  a=a*10+n[1]-'0';
  if(a<13)
  {
  for(i=1;n[i+1]!='\0';i++)
      {
      a=a*10+n[i+1]-'0';
      shang[i-1]=a/chushu+'0';
      a=a%chushu;
      }
  shang[i-1]='\0';
  }
  else
  {
  shang[0]=a/chushu+'0';
  a=a%chushu;
  for(i=1;n[i+1]!='\0';i++)
      {
      a=a*10+n[i+1]-'0';
      shang[i]=a/chushu+'0';
      a=a%chushu;
      }
  shang[i]='\0';
  }
printf("%s\n%d",shang,a);
}
return 0;
}