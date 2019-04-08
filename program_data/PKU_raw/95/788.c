void main()
{int i,j,m,n,t,k;
 char s1[81],s2[81];
 gets(s1);
 gets(s2);
 m=strlen(s1);
 n=strlen(s2);
 t=(m<n)? m:n;
 for(i=0;i<t;)
 {if(s1[i]<='z'&&s1[i]>='a') s1[i]-=32;
  if(s2[i]<='z'&&s2[i]>='a') s2[i]-=32;
  k=s1[i]-s2[i];
  if(k>0) {printf(">");break;}
  else if(k<0) {printf("<");break;}
       else i++;}
 if(k==0&&m>n) printf(">");
 else if(k==0&&m<n) printf("<");
 else if(k==0) printf("=");
}