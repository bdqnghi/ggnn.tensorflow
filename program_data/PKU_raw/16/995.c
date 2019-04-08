int main()
{
    int i;
   char a[5],c;
    memset(a,' ',sizeof(a));
      cin.getline(a,5);
      for(i=5;i>=0;i--)
    {
        if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
       {
          cout << a[i] ;
       }
    }
return 0;
}
 
 
 
