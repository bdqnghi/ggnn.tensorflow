int main()
{
char a[10000];
cin>>a;
int size=strlen(a);
int i,k;
for(i=0;i<size;i++)
if(a[i]>'Z')
a[i]=a[i]-('a'-'A');
for(i=0;i<size;)
{
   int j=0;
   for(k=0;k<size-i;k++)
   {
   if(a[i+k+1]==a[i+k])
	   j++;

   else if( a[i+k+1]=='\0')
   {
   j++;
   cout<<'('<<a[i+k]<<','<<j<<')';
   i=size;
   }
   else
   {
        cout<<'('<<a[i+k]<<','<<j+1<<')';
        i=i+j+1;
        break;
   }
   }
}
return 0;
}
