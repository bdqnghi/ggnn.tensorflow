void main()
{
int a,b,c,d,e,f;
scanf("%d",&a);

if(a/10000>=1&&a/10000<10)
{f=a%10;e=(a%100-f)/10;d=(a%1000-e*10-f)/100;c=(a%10000-d*100-e*10-f)/1000;b=(a%1000000-c*1000-d*100-e*10-f)/10000;
printf("%d%d%d%d%d\n",f,e,d,c,b);}
else if(a/1000>=1&&a/1000<10)
{f=a%10;e=(a%100-f)/10;d=(a%1000-e*10-f)/100;c=(a%10000-d*100-e*10-f)/1000;
printf("%d%d%d%d\n",f,e,d,c);}
else if(a/100>=1&&a/100<10)
{f=a%10;e=(a%100-f)/10;d=(a%1000-e*10-f)/100;
printf("%d%d%d\n",f,e,d);}
else if(a/10>=1&&a/10<10)
{f=a%10;e=(a%100-f)/10;
printf("%d%d\n",f,e);}
else if(a>=1&&a<=10)
{f=a%10;
printf("%d\n",f);}
else
printf("error\n");
}