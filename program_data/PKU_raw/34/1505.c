int jiaogu(int n)
{if(n==1) printf("End");
else 
{if(n%2==1) {printf("%d*3+1=%d\n",n,3*n+1);jiaogu(3*n+1);}
else {printf("%d/2=%d\n",n,n/2);jiaogu(n/2);}
}
return 0;
}

int main()
{int n;
scanf("%d",&n);
jiaogu(n);
return 0;
}