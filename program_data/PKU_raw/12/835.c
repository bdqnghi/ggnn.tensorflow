void main()
{
 int a[20][16],s[20]={0},i,j,k,p=0,n[20]={0};
 for(i=0;i<20;i++)
 {
     scanf("%d",&a[i][0]);
     if(a[i][0]==-1) break;
     p=p+1;
     for(j=1;j<16;j++)
     {
       scanf("%d",&a[i][j]);
       if(a[i][j]==0) break;
       s[i]=s[i]+1;
     }
 }
 for(i=0;i<p;i++)
 for(j=0;j<=s[i];j++)
 for(k=0;k<=s[i];k++)
 if(a[i][j]==2*a[i][k]) n[i]=n[i]+1;
 for(i=0;i<p;i++)
 printf("%d\n",n[i]);
}