void jishu(int n)
{int s;
s=n*3+1;
printf("%d*3+1=%d\n",n,s);
}
void oushu(int n)
{int s;
s=n/2;
printf("%d/2=%d\n",n,s);
}
int panduan(int n)
{if (n==1)return 5;
if (n%2==1)return 1;
if(n%2==0)return 0;
}

int main()
{int n,i;
	scanf("%d",&n);
if (n!=1)
 {for (i=1;n!=1;i++)
	{
	 if(panduan(n)==0){oushu(n);n=n/2;}
	 if(panduan(n)==1){jishu(n);n=n*3+1;}
		if(panduan(n==5))break;
	}
 
 }
 printf("End");
 
 }