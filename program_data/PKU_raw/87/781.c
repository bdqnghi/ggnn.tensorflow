int main ()
{
int i,a,b,c,d,e,f,ans;
for (i=0;i<1000;i++)
{
scanf (" %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
if (a==0&&b==0&&c==0&&d==0&&e==0&&f==0){return 0;}
else if (c<=f&&b<=e) {ans=(12+d-a)*3600+(e-b)*60+(f-c)*1;}
else if (c>=f&&b<=e) {ans=(12+d-a)*3600+(e-b)*60+(f-c)*1;}
else if (c<=f&&b>=e) {ans=(12+d-a)*3600+(e-b)*60+(f-c)*1;}
else if (c>=f&&b>=e) {ans=(12+d-a)*3600+(e-b)*60+(f-c)*1;}
printf ("%d\n",ans);
}
return 0;
}