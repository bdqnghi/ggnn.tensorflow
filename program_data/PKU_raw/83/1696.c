int main()
{
int i,n,s,k,a[11];
float sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
scanf("%d",&k);
switch(k)
{
case 90:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
case 98:
case 99:
case 100:
{
sum+=a[i]*4;
break;
}
case 85:
case 86:
case 87:
case 88:
case 89:
{
sum+=a[i]*3.7;
break;
}
case 82:
case 83:
case 84:
{
sum+=a[i]*3.3;
break;
}
case 78:
case 79:
case 80:
case 81:
{
sum+=a[i]*3;
break;
}
case 75:
case 76:
case 77:
{
sum+=a[i]*2.7;
break;
}
case 72:
case 73:
case 74:
{
sum+=a[i]*2.3;
break;
}
case 68:
case 69:
case 70:
case 71:
{
sum+=a[i]*2;
break;
}
case 64:
case 65:
case 66:
case 67:
{
sum+=a[i]*1.5;
break;
}
case 60:
case 61:
case 62:
case 63:
{
sum+=a[i];
break;
}
}
}
s=0;
for(i=1;i<=n;i++)
{
s+=a[i];
}
sum/=s;
printf("%.2f",sum);
return 0;
}
