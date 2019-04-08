int main()
{
 char a[1005];
 int l,i;
 gets(a);
 l = strlen(a);
 int t = 1;
 if(a[0]>='a' && a[0]<='z')
       a[0] = a[0] - 'a' + 'A';
 char p = a[0];
 for(i = 1;i <= l; i++)
 {
     if(a[i]>='a' && a[i]<='z')
       a[i] = a[i] - 'a' + 'A';
    if(a[i] != p)
    {
      printf("(%c,%d)",p,t);
      t = 1;
      p = a[i];       
    }
    else t++;
 }

 return 0;    
}
