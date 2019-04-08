int main()
{    
     char a[110],b[110],c[110];
     gets(a);
     gets(b);
     gets(c);
     int x,y,z,flag;
     x=strlen(a);
     y=strlen(b);
     z=strlen(c);
     
     for (int i=0;i<x;i++)
     {
      if((i==0&&a[y]==' ')||(a[i-1]==' '&&(i+y)==x)||(a[i-1]==' '&&a[i+y]==' ')) {
      flag=0; 
      for (int j=0;j<y;j++)
     {if (a[i+j]!=b[j])
     {flag=1;break;}}
     if (flag==0)
     {cout<<c;
     i+=y-1;continue;}}
     cout<<a[i];
     }
     
     return 0;
}