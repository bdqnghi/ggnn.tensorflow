int main()
{	char sz[100];
	scanf("%s",sz);
	int xu;
	int len;
	len=strlen(sz);
	int a=0,b=0,c=0,d=0,e=0;
	int f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0;
	int r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
	for(xu=0;xu<len;xu++){
		if(sz[xu]==97)a++;
		else if(sz[xu]==98)b++;
		else if(sz[xu]==99)c++;
		else if(sz[xu]==100)d++;
		else if(sz[xu]==101)e++;
		else if(sz[xu]==102)f++;
		else if(sz[xu]==103)g++;
		else if(sz[xu]==104)h++;
		else if(sz[xu]==105)i++;
		else if(sz[xu]==106)j++;
		else if(sz[xu]==107)k++;
		else if(sz[xu]==108)l++;
		else if(sz[xu]==109)m++;
		else if(sz[xu]==110)n++;
		else if(sz[xu]==111)o++;
		else if(sz[xu]==112)p++;
		else if(sz[xu]==113)q++;
		else if(sz[xu]==114)r++;
		else if(sz[xu]==115)s++;
		else if(sz[xu]==115)s++;
		else if(sz[xu]==115)s++;
		else if(sz[xu]==116)t++;
		else if(sz[xu]==117)u++;
		else if(sz[xu]==118)v++;
		else if(sz[xu]==119)w++;
		else if(sz[xu]==120)x++;
		else if(sz[xu]==121)y++;
		else if(sz[xu]==122)z++;
	}
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0&&i==0&&j==0&&k==0&&l==0&&m==0&&n==0&&o==0&&p==0&&q==0&&r==0&&s==0&&t==0&&u==0&&v==0&&w==0&&x==0&&y==0&&z==0){
		printf("No");
	}
	else{
		if(a!=0)printf("a=%d\n",a);
		if(b!=0)printf("b=%d\n",b);
		if(c!=0)printf("c=%d\n",c);
		if(d!=0)printf("d=%d\n",d);
		if(e!=0)printf("e=%d\n",e);
		if(f!=0)printf("f=%d\n",f);
		if(g!=0)printf("g=%d\n",g);
		if(h!=0)printf("h=%d\n",h);
		if(i!=0)printf("i=%d\n",i);
		if(j!=0)printf("j=%d\n",j);
		if(k!=0)printf("k=%d\n",k);
		if(l!=0)printf("l=%d\n",l);
		if(m!=0)printf("m=%d\n",m);
		if(n!=0)printf("n=%d\n",n);
		if(o!=0)printf("o=%d\n",o);
		if(p!=0)printf("p=%d\n",p);
		if(q!=0)printf("q=%d\n",q);
		if(r!=0)printf("r=%d\n",r);
		if(s!=0)printf("s=%d\n",s);
		if(t!=0)printf("t=%d\n",t);
		if(u!=0)printf("u=%d\n",u);
		if(v!=0)printf("v=%d\n",v);
		if(w!=0)printf("w=%d\n",w);
		if(x!=0)printf("x=%d\n",x);
		if(y!=0)printf("y=%d\n",y);
		if(z!=0)printf("z=%d",z);
	}
	return 0;
}
