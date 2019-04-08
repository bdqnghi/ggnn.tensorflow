int s1=0,s2=0;
void reads()
 {cin>>s1>>s2;
 }
void read(int s,int a[])
 {for (int i=1;i<=s;i++)cin>>a[i];
 }
void sort(int s,int a[])
 {
  for (int i=1;i<=s-1;i++)
   for (int j=i+1;j<=s;j++)
    {
     if (a[i]>a[j]){int c=a[i];a[i]=a[j];a[j]=c;}
    }
 }
void combine (int s1,int s2,int a1[],int a2[])
 {
  for (int i=s1+1;i<=s1+s2;i++)
  a1[i]=a2[i-s1];
 } 
void print (int s,int a[])
  {for (int i=1;i<=s;i++)
  {cout<<a[i];
   if (i<s)cout<<' ';}
  }
int main()
{int a1[500],a2[500];
reads();
read(s1,a1);
read(s2,a2);
sort(s1,a1);
sort(s2,a2);
combine(s1,s2,a1,a2);
print(s1+s2,a1);
return 0;
}
