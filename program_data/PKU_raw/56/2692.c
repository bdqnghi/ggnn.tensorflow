void main()
{
 int n,w,q,b,s,g,k,a[200],i;
 scanf ("%d",&n);
 w=n/10000;
 q=(n-w*10000)/1000;
 b=(n-w*10000-q*1000)/100;
 s=(n-w*10000-q*1000-b*100)/10;
 g=n-w*10000-q*1000-b*100-s*10;
 if (w==0&&q!=0&&b!=0&&s!=0) k=4;
 else if (w==0&&q==0&&b!=0&&s!=0) k=3;
 else if (w==0&&q==0&&b==0&&s!=0) k=2;
 else if (w==0&&q==0&&b==0&&s==0) k=1;
 else k=5;
 a[0]=g;a[1]=s;a[2]=b;a[3]=q;a[4]=w;
 for (i=0;i<k;i++)
 { printf ("%d",a[i]);}
}





