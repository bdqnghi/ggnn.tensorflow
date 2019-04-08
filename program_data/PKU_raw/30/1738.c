int main()
{float n,a,b,i,c=0,s=0;
cin>>n;
for(a=7;a<=n;a=a+7)
	s=s+a*a;
for(b=17;b<=n;b=b+10)
	s=s+b*b;
if(n>=80)
	{{for(i=70;i<=79;i++)
	s=s+i*i;}
	s=s-2*77*77-70*70;}
if(n>=70&&n<77)
{{for(i=70;i<=n;i++)
	s=s+i*i;
}
s=s-70*70-77*77;}
if(n>=77&&n<80)
	{{for(i=78;i<=n;i++)
		s=s+i*i;}
	s=s-70*70-77*77;}
if(n<70)
	s=s;
for(i=1;i<=n;i++)
	c=c+i*i;
s=c-s;
cout<<s<<endl;
return 0;
}