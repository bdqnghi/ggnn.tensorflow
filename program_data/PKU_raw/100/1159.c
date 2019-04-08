int main()
{
	char sequence[301];
	scanf("%s",sequence);
	int num=0;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,none=0;
	for(num=0;sequence[num]!='\0';num++)
	{
		switch(sequence[num])
		{
		case 'a':a++;break;
		case 'b':b++;break;
		case 'c':c++;break;
        case 'd':d++;break;
        case 'e':e++;break;
		case 'f':f++;break;
		case 'g':g++;break;
        case 'h':h++;break;
        case 'i':i++;break;
		case 'j':j++;break;
		case 'k':k++;break;
        case 'l':l++;break;
        case 'm':m++;break;
		case 'n':n++;break;
		case 'o':o++;break;
        case 'p':p++;break;
        case 'q':q++;break;
		case 'r':r++;break;
		case 's':s++;break;
        case 't':t++;break;
        case 'u':u++;break;
		case 'v':v++;break;
		case 'w':w++;break;
        case 'x':x++;break;
        case 'y':y++;break;
		case 'z':z++;break;
		}
		
		if(sequence[num]<97 || sequence[num]>122)
		{	none++;
		///printf("%d\n",none);
		}
	}
	if(a>0)
	printf("a=%d\n",a);
	if(b>0)
    printf("b=%d\n",b);
	if(c>0)
    printf("c=%d\n",c);
	if(d>0)
	printf("d=%d\n",d);
    if(e>0)
	printf("e=%d\n",e);
    if(f>0)
	printf("f=%d\n",f);
    if(g>0)
	printf("g=%d\n",g);
    if(h>0)
	printf("h=%d\n",h);
    if(i>0)
    printf("i=%d\n",i);
    if(j>0)
    printf("j=%d\n",j);
    if(k>0)
    printf("k=%d\n",k);
    if(l>0)
	printf("l=%d\n",l);
	if(m>0)
    printf("m=%d\n",m);
	if(n>0)
    printf("n=%d\n",n);
	if(o>0)
    printf("o=%d\n",o);
	if(p>0)
	printf("p=%d\n",p);
	if(q>0)
    printf("q=%d\n",q);
	if(r>0)
    printf("r=%d\n",r);
	if(s>0)
    printf("s=%d\n",s);
	if(t>0)
	printf("t=%d\n",t);
	if(u>0)
    printf("u=%d\n",u);
	if(v>0)
    printf("v=%d\n",v);
	if(w>0)
    printf("w=%d\n",w);
	if(x>0)
	printf("x=%d\n",x);
	if(y>0)
    printf("y=%d\n",y);
	if(z>0)
    printf("z=%d\n",z);
	if(none==num)
    printf("No\n");
	return 0;
}

