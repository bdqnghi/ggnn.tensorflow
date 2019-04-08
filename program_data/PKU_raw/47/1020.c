int main()
{int n,i,k;
i=0;
k=0;
scanf("%d",&n);
int w[n];
while(i<=n-1)
{i=n-1-i;
 scanf("%d",&(w[i]));
 i=n-1-i;
 i=i+1;
 }
 while(k<=n-1)
{ if(k==n-1)
{printf("%d",(w[k]));
}
else{
printf("%d ",(w[k]));
}
k=k+1;
}
return 0;
}

