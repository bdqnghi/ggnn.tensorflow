int main()
{
    char a[100];
    int i=0,j=0,num=0,beg=0;
    while((a[i]=getchar())!='\n')i++;//????????? 
    num=i-1;
    i=0;
    while(i<=num)
    {
      while(a[i]==' '&&i<=num)i++;//?????? 
      beg=i;
      while(a[i]!=' '&&i<=num)i++;//?????? 
      for(j=beg;j<i;j++)
      cout<<a[j];//??????j????????j????i 
      if(j!=num+1)cout<<' ';
    } 
    return 0;
}
