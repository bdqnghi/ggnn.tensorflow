
int main(){
	int a,b,c,i;
	for (a=0;a<=2;a++)
	 for (b=0;b<=2;b++)
      if (a!=b)
      { c=3-a-b;
        if ((a+(b>a)+(c==a)==2)&&(b+(a>b)+(a>c)==2)&&(c+(c>b)+(b>a)==2))
        	for (i=0;i<=2;i++)
        	   {if (a==i) cout<<'A';
        	    if (b==i) cout<<'B';
        	    if (c==i) cout<<'C';}
      }



 return 0;
}