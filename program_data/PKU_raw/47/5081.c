int main()
{
int n;
scanf ("%d",&n);
int shuzu[n],Shuzu[n];
for(int k=0;k<n;k++)
scanf ("%d",&shuzu[k]);
for(int i=0;i<n;i++)
Shuzu[i]=shuzu[n-1-i];
for (int r=0;r<n-1;r++)
printf ("%d ",Shuzu[r]);
printf ("%d",Shuzu[n-1]);
return 0;
}



