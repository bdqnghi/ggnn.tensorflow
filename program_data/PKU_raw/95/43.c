int main(){
	 int m,n,max;
     char p[80],q[80];
	 gets(p);
	 gets(q);
     m=strlen(p);
	 n=strlen(q);
	 if(m>n)  max=m;
	 else max=n;
	 for(int i=0;i<max;i++)
	 {
	      if(p[i]>='a'&&p[i]<='z')
			  p[i]=p[i]-32;
	 }
     for(int j=0;j<max;j++)
	 {
	      if(q[j]>='a'&&q[j]<='z')
			  q[j]=q[j]-32;
	 }
	 int a=strcmp(p,q);
	     if(a>0)printf(">");
		 else if(a<0)printf("<");
		 else if(a==0)printf("=");
	 return 0;
}