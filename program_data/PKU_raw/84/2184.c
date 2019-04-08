int main()
{
int n, i, max, sec, a[100];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
max=a[0];
sec=a[0];
for(i=0;i<n;i++){
if(a[i]>max){
max=a[i];
  }
else if(a[i]<max&&a[i]>sec){
sec=a[i];
   }
}
printf("%d\n%d",max,sec);
return 0;
}