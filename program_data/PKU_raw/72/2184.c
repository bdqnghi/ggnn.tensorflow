int main ()
{int m,n;
scanf("%d%d",&m,&n);
int mj[m][n];
for (int i1=0;i1<m;i1++)
{
   for (int j1=0;j1<n;j1++)
   {
    scanf("%d",&mj[i1][j1]);
   }
} 
for (int i2=0;i2<m;i2++)
{
   for (int j2=0;j2<n;j2++)
   {
    if (i2==0||i2==m-1||j2==0||j2==n-1)
    {
     if(i2==0&&j2==0&&mj[i2][j2]>=mj[i2+1][j2]&&mj[i2][j2]>=mj[i2][j2+1]){printf("%d %d\n",i2,j2);}
     if(i2==0&&j2==n-1&&mj[i2][j2]>=mj[i2+1][j2]&&mj[i2][j2]>=mj[i2][j2-1]){printf("%d %d\n",i2,j2);}
     if(i2==m-1&&j2==0&&mj[i2][j2]>=mj[i2-1][j2]&&mj[i2][j2]>=mj[i2][j2+1]){printf("%d %d\n",i2,j2);}
     if(i2==m-1&&j2==n-1&&mj[i2][j2]>=mj[i2-1][j2]&&mj[i2][j2]>=mj[i2][j2-1]){printf("%d %d\n",i2,j2);}
     if(i2==0&&j2!=0&&j2!=n-1&&mj[i2][j2]>=mj[i2+1][j2]&&mj[i2][j2]>=mj[i2][j2+1]&&mj[i2][j2]>=mj[i2][j2-1]){printf("%d %d\n",i2,j2);}
     if(i2==m-1&&j2!=0&&j2!=n-1&&mj[i2][j2]>=mj[i2-1][j2]&&mj[i2][j2]>=mj[i2][j2+1]&&mj[i2][j2]>=mj[i2][j2-1]){printf("%d %d\n",i2,j2);}
     if(j2==0&&i2!=0&&i2!=m-1&&mj[i2][j2]>=mj[i2+1][j2]&&mj[i2][j2]>=mj[i2][j2+1]&&mj[i2][j2]>=mj[i2-1][j2]){printf("%d %d\n",i2,j2);}
     if(j2==n-1&&i2!=0&&i2!=m-1&&mj[i2][j2]>=mj[i2+1][j2]&&mj[i2][j2]>=mj[i2][j2-1]&&mj[i2][j2]>=mj[i2-1][j2]){printf("%d %d\n",i2,j2);}
    }
    else{
    if (mj[i2][j2]>=mj[i2-1][j2]&&mj[i2][j2]>=mj[i2+1][j2]&&mj[i2][j2]>=mj[i2][j2-1]&&mj[i2][j2]>=mj[i2][j2+1]){printf("%d %d\n",i2,j2);} 
     }
   }
}
return 0;
}

