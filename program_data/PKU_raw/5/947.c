

int main()
{
 int m,i,j,f,e,d,k;
 int q[10000],p[10000];
 double r,n;
 char s[10000],w[100000];
 e=0;
 k=0;
 scanf("%lf",&n);
 scanf("%s",s);
 scanf("%s",w);
 m=strlen(s);
 k=strlen(w);
 for(i=0;i<m;i++){

	 if(s[i]!='A'&&s[i]!='G'&&s[i]!='C'&&s[i]!='T'){printf("error");break;}
	 if(w[i]!='A'&&w[i]!='G'&&w[i]!='C'&&w[i]!='T'){printf("error");break;}
	 if(k!=m){printf("error");break;}
	 if(s[i]==w[i])e++;
	 if(i==m-1){
		 r=e*1.0/m;
		 if(r>=n)printf("yes");
		 else printf("no");
	 }
 }




 return 0;
}
