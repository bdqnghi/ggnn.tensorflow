int main()
{
      char str[35],*p;
      int t,i,l=0;
      gets(str);
      p=str;
      for(i=0;*(p+i)!='\0';i++)
      {
            if(*(p+i)>='0' && *(p+i)<='9')
            {
                  cout<<*(p+i);
                  t=1;
            }
            else
                  t=0;
            if(t==0&&*(p+i-1)>='0'&&*(p+i-1)<='9')
            	cout<<endl;
            l++;
      }
      if(*(p+l-1)>='0'&&*(p+l-1)<='9')
            cout<<endl;
      return 0;
}