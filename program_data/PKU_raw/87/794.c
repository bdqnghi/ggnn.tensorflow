int main ()
{int a,b,c,d,e,f,g;
a=-1;
scanf ("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
while (a!=0 || b!=0 || c!=0 || d!=0 || e!=0 || f!=0)
{g=(12+d-a)*3600+(e-b)*60+(f-c);

printf ("%d\n",g);
scanf ("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
}
return 0;
}