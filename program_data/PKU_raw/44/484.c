int fan(int a)
{int i,j;
int k;
int b=0;
int c[10];
if(a<0)
{k=1;
a=-a;}
else if(a==0)
{return 0;}
else
{k=0;}
for(i=0;i<10;i++)
c[i]='\0';
for(i=0;i<10;i++)
{c[i]=a%10;
a=a/10;
if(a==0)
break;
                 }
for(j=0;j<=i;j++)
{b=b*10;
b=b+c[j];
}
if(k==0)
return b;
else
return -b;

}

int main()
{int i,j;
int a,b;
for(i=0;i<6;i++)
{cin>>a;
b=fan(a);
cout<<b<<endl;}
return 0;
    }