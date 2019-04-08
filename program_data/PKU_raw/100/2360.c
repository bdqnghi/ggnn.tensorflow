void main()
{
	char str[300];
	int i,n,flag=0;
	int a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,i1=0,j1=0,k1=0,l1=0,m1=0,n1=0,o1=0,p1=0,q1=0,r1=0,s1=0,t1=0,u1=0,v1=0,w1=0,x1=0,y1=0,z1=0;
    int a2=0,b2=0,c2=0,d2=0,e2=0,f2=0,g2=0,h2=0,i2=0,j2=0,k2=0,l2=0,m2=0,n2=0,o2=0,p2=0,q2=0,r2=0,s2=0,t2=0,u2=0,v2=0,w2=0,x2=0,y2=0,z2=0;
	gets(str);
	n=strlen(str);

	for(i=0;i<n;i++){
		if(str[i]>'A'&&str[i]<'Z'||str[i]>'a'&&str[i]<'z')
			flag++;
	}
	if(flag==0)
		printf("No\n");
	else {
		for(i=0;i<n;i++){
			if(str[i]=='A')
				a1++;
			else if(str[i]=='B')
				b1++;
			else if(str[i]=='C')
				c1++;
			else if(str[i]=='D')
				d1++;
			else if(str[i]=='E')
				e1++;
			else if(str[i]=='F')
				f1++;
			else if(str[i]=='G')
				g1++;
			else if(str[i]=='H')
				h1++;
			else if(str[i]=='I')
				i1++;
			else if(str[i]=='J')
				j1++;
			else if(str[i]=='K')
				k1++;
			else if(str[i]=='L')
				l1++;
			else if(str[i]=='M')
				m1++;
			else if(str[i]=='N')
				n1++;
			else if(str[i]=='O')
				o1++;
			else if(str[i]=='p')
				p1++;
			else if(str[i]=='Q')
				q1++;
			else if(str[i]=='R')
				r1++;
			else if(str[i]=='S')
				s1++;
			else if(str[i]=='T')
				t1++;
			else if(str[i]=='U')
				u1++;
			else if(str[i]=='V')
				v1++;
			else if(str[i]=='W')
				w1++;
			else if(str[i]=='X')
				x1++;
			else if(str[i]=='Y')
				y1++;
			else if(str[i]=='Z')
				z1++;
			else if(str[i]=='a')
				a2++;
			else if(str[i]=='b')
				b2++;
			else if(str[i]=='c')
				c2++;
			else if(str[i]=='d')
				d2++;
			else if(str[i]=='e')
				e2++;
			else if(str[i]=='f')
				f2++;
			else if(str[i]=='g')
				g2++;
			else if(str[i]=='h')
				h2++;
			else if(str[i]=='i')
				i2++;
			else if(str[i]=='j')
				j2++;
			else if(str[i]=='k')
				k2++;
			else if(str[i]=='l')
				l2++;
			else if(str[i]=='m')
				m2++;
			else if(str[i]=='n')
				n2++;
			else if(str[i]=='o')
				o2++;
			else if(str[i]=='p')
				p2++;
			else if(str[i]=='q')
				q2++;
			else if(str[i]=='r')
				r2++;
			else if(str[i]=='s')
				s2++;
			else if(str[i]=='t')
				t2++;
			else if(str[i]=='u')
				u2++;
			else if(str[i]=='v')
				v2++;
			else if(str[i]=='w')
				w2++;
			else if(str[i]=='x')
				x2++;
			else if(str[i]=='y')
				y2++;
			else if(str[i]=='z')
				z2++;
		}
	}
	if(a1>0) printf("A=%d\n",a1);
	if(b1>0) printf("B=%d\n",b1);
	if(c1>0) printf("C=%d\n",c1);
	if(d1>0) printf("D=%d\n",d1);
	if(e1>0) printf("E=%d\n",e1);
	if(f1>0) printf("F=%d\n",f1);
	if(g1>0) printf("G=%d\n",g1);
	if(h1>0) printf("H=%d\n",h1);
	if(i1>0) printf("I=%d\n",i1);
	if(j1>0) printf("J=%d\n",j1);
	if(k1>0) printf("K=%d\n",k1);
	if(l1>0) printf("L=%d\n",l1);
	if(m1>0) printf("M=%d\n",m1);
	if(n1>0) printf("M=%d\n",n1);
	if(o1>0) printf("O=%d\n",o1);
	if(p1>0) printf("P=%d\n",p1);
	if(q1>0) printf("Q=%d\n",q1);
	if(r1>0) printf("R=%d\n",r1);
	if(s1>0) printf("S=%d\n",s1);
	if(t1>0) printf("T=%d\n",t1);
	if(u1>0) printf("U=%d\n",u1);
	if(v1>0) printf("V=%d\n",v1);
	if(w1>0) printf("W=%d\n",w1);
	if(x1>0) printf("X=%d\n",x1);
	if(y1>0) printf("Y=%d\n",y1);
	if(z1>0) printf("Z=%d\n",z1);
	if(a2>0) printf("a=%d\n",a2);
	if(b2>0) printf("b=%d\n",b2);
	if(c2>0) printf("c=%d\n",c2);
	if(d2>0) printf("d=%d\n",d2);
	if(e2>0) printf("e=%d\n",e2);
	if(f2>0) printf("f=%d\n",f2);
	if(g2>0) printf("g=%d\n",g2);
	if(h2>0) printf("h=%d\n",h2);
	if(i2>0) printf("i=%d\n",i2);
	if(j2>0) printf("j=%d\n",j2);
	if(k2>0) printf("k=%d\n",k2);
	if(l2>0) printf("l=%d\n",l2);
	if(m2>0) printf("m=%d\n",m2);
	if(n2>0) printf("n=%d\n",n2);
	if(o2>0) printf("o=%d\n",o2);
	if(p2>0) printf("p=%d\n",p2);
	if(q2>0) printf("q=%d\n",q2);
	if(r2>0) printf("r=%d\n",r2);
	if(s2>0) printf("s=%d\n",s2);
	if(t2>0) printf("t=%d\n",t2);
	if(u2>0) printf("u=%d\n",u2);
	if(v2>0) printf("v=%d\n",v2);
	if(w2>0) printf("w=%d\n",w2);
	if(x2>0) printf("x=%d\n",x2);
	if(y2>0) printf("y=%d\n",y2);
	if(z2>0) printf("z=%d\n",z2);
}





