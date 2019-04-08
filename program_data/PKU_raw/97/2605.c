
int main()
{ int m,c100=0,c50=0,c20=0,c10=0,c5=0,c1=0;
cin>>m;
if(m/100!=0)
{ c100=m/100;
   m=m%100;
}
if(m/50!=0)
{c50=m/50;
 m=m%50;
}
if(m/20!=0)
{c20=m/20;
m=m%20;
}
if(m/10!=0)
{c10=m/10;
m=m%10;
}
if(m/5!=0)
{c5=m/5;
 m=m%5;
}
if(m/1!=0)
{ c1=m;
}
cout<<c100<<endl<<c50<<endl<<c20<<endl<<c10<<endl<<c5<<endl<<c1<<endl;

return 0;
}