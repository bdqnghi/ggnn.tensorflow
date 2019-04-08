void main()
{
  int n,i,j=0,k=0,l;
  scanf("%d",&n);
 struct p
  {
    char id[10];
    int age;
   }a[n],b[n],c[n],d;
 for(i=0;i<n;i++)
  { 
    scanf("%s %d",&a[i].id,&a[i].age);
    if(a[i].age>=60) {b[j]=a[i];j++;}
    else {c[k]=a[i];k++;}
   }
 for(i=0;i<j-1;i++)
  for(l=0;l<j-1-i;l++)
   if(b[l].age<b[l+1].age) {d=b[l];b[l]=b[l+1];b[l+1]=d;}
  for(i=0;i<j;i++)
  printf("%s\n",b[i].id);
   for(i=0;i<k;i++)
  printf("%s\n",c[i].id);
}