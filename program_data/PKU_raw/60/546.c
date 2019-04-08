void print(int a)
{printf("%d %d\n",a,a+2);
}

int search(int b)
{int i=2,j=1;
for(i=2;i<=sqrt(b);i++)
{if(b%i==0)
{j=0;break;}
}
return(j);
}

void main()
{
int n;
scanf("%d",&n);
int i=2,sum=0;
for(i=2;i<=n-2;i++)
{if(search(i)==1&&search(i+2)==1)
{print(i);sum++;}
}
if(sum==0)
{printf("empty");}
}
