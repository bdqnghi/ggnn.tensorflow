

int main()
{
    char a[30];
    gets(a);
    int k;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>='0'&&a[i]<='9')
         {
           for(int j=i;j<strlen(a);j++)
         {
            if(a[j]<'0'||a[j]>'9')
            {
               cout<<endl;
               break;
            }
            cout<<a[j];
            k=j;
         }
         i=k;
         }
    }
   return 0;
}
