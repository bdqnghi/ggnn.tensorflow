int main()
{
int a,b,c,d,e,f,i;
int sum;
int n=100;
for(i=0;i<n;i++){
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);
scanf("%d",&f);
if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){

sum=(d+11-a)*3600+(59+e-b)*60+(60+f-c);
printf("%d\n",sum);
}
else if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){break;
}

}//for

return 0;
}//main
