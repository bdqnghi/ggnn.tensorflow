main(){
int a;
int b;
int c;
int d;
scanf("%d",&a);
b=a%2;

if(b==0)
{
while(b==0)
{
c=a/2;
b=c%2;
printf("%d/2=%d\n",a,c);
a=c;
}
if(a==1)
printf("End");
else{
while((b!=0)&&(a!=1))
{

d=a*3+1;
printf("%d*3+1=%d\n",a,d);
a=d;
b=a%2;
while(b==0)
{
c=a/2;
b=c%2;
printf("%d/2=%d\n",a,c);
a=c;
}

}

printf("End");
}
}


else
{
if(a==1)
printf("End");
else
{
while((b!=0)&&(a!=1))
{

d=a*3+1;
printf("%d*3+1=%d\n",a,d);
a=d;
b=a%2;
while(b==0)
{
c=a/2;
b=c%2;
printf("%d/2=%d\n",a,c);
a=c;
}

}

printf("End");
}

}
}
