int main()
{
int a[100],b,c,i,j,temp;
scanf("%d%d",&b,&c);
for(i=0;i<b;i++)
scanf("%d",&a[i]);
for(i=0;i<b-c;i++)
{
temp=a[0];
for(j=0;j<b-1;j++)
a[j]=a[j+1];
a[j]=temp;
}
cout<<a[0];
for(i=1;i<b;i++)
cout<<" "<<a[i];
printf("\n");
return 0;
}