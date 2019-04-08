int main ()
{
int n,i;
int a[1000];
int b[1000];
int result[1000];
int ax=0,bx=0;

scanf ("%d",&n);
for (i=0;i<n;i++)
{  //0?????1?????2????
	scanf ("%d %d",&a[i],&b[i]);
	if (a[i]==0&&b[i]==0){result[i]=0;}
	else if (a[i]==1&&b[i]==1){result[i]=0;}
	else if (a[i]==2&&b[i]==2){result[i]=0;}
	else if (a[i]==0&&b[i]==1){result[i]=1;}
	else if (a[i]==0&&b[i]==2){result[i]=2;}
	else if (a[i]==1&&b[i]==2){result[i]=1;}
	else if (a[i]==1&&b[i]==0){result[i]=2;}
	else if (a[i]==2&&b[i]==0){result[i]=1;}
	else if (a[i]==2&&b[i]==1){result[i]=2;}
}

for (i=0;i<n;i++)
{
	if (result[i]==1){ax++;}
	else if (result[i]==2){bx++;}
}

if (ax>bx) {printf ("A");}
else if (ax<bx) {printf ("B");}
else if (ax==bx) {printf ("Tie");}
return 0;
}