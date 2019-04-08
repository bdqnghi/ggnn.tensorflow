void main()
{int i,n,a=0,b=0,c=0,d=0,s[100];
double x,y,p,q;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{scanf("%d",&s[i]);
if(s[i]<=18)a+=1;
if(s[i]<=35&&s[i]>=19)b+=1;
if(s[i]<=60&&s[i]>=36)c+=1;
if(s[i]>=61)d+=1;
};
x=(double)a/n*100;
y=(double)b/n*100;
p=(double)c/n*100;
q=(double)d/n*100;
printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",x,y,p,q);
}