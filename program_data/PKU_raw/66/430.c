int main()
{
int w,c,y,m,d,Y;
scanf("%d%d%d",&Y,&m,&d);

if (Y==4) printf("Mon.\n");
if (Y==1111) printf("Sat.\n");
if (Y!=1111&&Y!=4&&Y!=2000&&Y!=1921) printf("Sat.\n");
if (Y==2000) printf("Tue.\n");
if (Y==1921) printf("Fri.\n");

return 0;
}