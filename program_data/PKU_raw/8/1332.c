int a[100],b[100];
int al=0,bl=0,i,j,k;
void f1()
{cin>>al>>bl;
for(i=0;i<al;i++)
{cin>>a[i];
}
for(i=0;i<bl;i++)
{cin>>b[i];
}
}
void f2()
{for(i=0;i<al-1;i++)
{for(j=i;j<al;j++)
{if(a[i]>a[j]){k=a[i];a[i]=a[j];a[j]=k;}
}
}
for(i=0;i<bl-1;i++)
{for(j=i;j<bl;j++)
{if(b[i]>b[j]){k=b[i];b[i]=b[j];b[j]=k;}
}
}
}
void f3()
{for(i=0;i<bl;i++)
{a[i+al]=b[i];
}
}
void f4()
{for(i=0;i<al+bl-1;i++)
{cout<<a[i]<<" ";
}
cout<<a[al+bl-1];
}
int main()
{f1();f2();f3();f4();
return 0;
}