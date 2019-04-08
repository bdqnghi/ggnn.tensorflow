void main()
{int a,b,i,j;
 while(1)
 {
	 scanf("%d %d",&a,&b);
     if(a==0&&b==0)break;
 
	 int f[301]={0},n;
 
	 n=a;
 
	 for(j=1;j<=n;j++)
 
	 {f[j]=(f[j-1]+b)%j;
     if(f[j]==0)
      f[j]=j;}
 printf("%d\n",f[n]);
}
}