int main(int argc, char* argv[])
{  char zm[301]={0},ss[27]="abcdefghijklmnopqrstuvwxyz";
   scanf("%s",zm);
   
   int ii,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
  
   for (ii=0;ii<300;ii++){
	   
	   if (zm[ii]==ss[0])   a+=1;
	   if (zm[ii]==ss[1])   b+=1;
	   if (zm[ii]==ss[2])   c+=1;
	   if (zm[ii]==ss[3])   d+=1;
	   if (zm[ii]==ss[4])   e+=1;
	   if (zm[ii]==ss[5])   f+=1;
	   if (zm[ii]==ss[6])   g+=1;
	   if (zm[ii]==ss[7])   h+=1;
	   if (zm[ii]==ss[8])   i+=1;
	   if (zm[ii]==ss[9])   j+=1;
	   if (zm[ii]==ss[10])   k+=1;
	   if (zm[ii]==ss[11])   l+=1;
	   if (zm[ii]==ss[12])   m+=1;
	   if (zm[ii]==ss[13])   n+=1;
	   if (zm[ii]==ss[14])   o+=1;
	   if (zm[ii]==ss[15])   p+=1;
	   if (zm[ii]==ss[16])   q+=1;
	   if (zm[ii]==ss[17])   r+=1;
	   if (zm[ii]==ss[18])   s+=1;
	   if (zm[ii]==ss[19])   t+=1;
	   if (zm[ii]==ss[20])   u+=1;
	   if (zm[ii]==ss[21])   v+=1;
	   if (zm[ii]==ss[22])   w+=1;
	   if (zm[ii]==ss[23])   x+=1;
	   if (zm[ii]==ss[24])   y+=1;
	   if (zm[ii]==ss[25])   z+=1;
   }
     if(a!=0)  printf("%s=%d\n","a",a);
	 if(b!=0)  printf("%s=%d\n","b",b);
	 if(c!=0)  printf("%s=%d\n","c",c);
	 if(d!=0)  printf("%s=%d\n","d",d);
	 if(e!=0)  printf("%s=%d\n","e",e);
	 if(f!=0)  printf("%s=%d\n","f",f);
	 if(g!=0)  printf("%s=%d\n","g",g);
	 if(h!=0)  printf("%s=%d\n","h",h);
	 if(i!=0)  printf("%s=%d\n","i",i);
	 if(j!=0)  printf("%s=%d\n","j",j);
	 if(k!=0)  printf("%s=%d\n","k",k);
	 if(l!=0)  printf("%s=%d\n","l",l);
	 if(m!=0)  printf("%s=%d\n","m",m);
	 if(n!=0)  printf("%s=%d\n","n",n);
	 if(o!=0)  printf("%s=%d\n","o",o);
	 if(p!=0)  printf("%s=%d\n","p",p);
	 if(q!=0)  printf("%s=%d\n","q",q);
	 if(r!=0)  printf("%s=%d\n","r",r);
	 if(s!=0)  printf("%s=%d\n","s",s);
	 if(t!=0)  printf("%s=%d\n","t",t);
	 if(u!=0)  printf("%s=%d\n","u",u);
	 if(v!=0)  printf("%s=%d\n","v",v);
	 if(w!=0)  printf("%s=%d\n","w",w);
	 if(x!=0)  printf("%s=%d\n","x",x);
	 if(y!=0)  printf("%s=%d\n","y",y);
	 if(z!=0)  printf("%s=%d\n","z",z);
	 if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0&&i==0&&j==0&&k==0&&l==0&&m==0&&n==0&&o==0&&p==0&&q==0&&r==0&&s==0&&t==0&&u==0&&v==0&&w==0&&x==0&&y==0&&z==0)
		 printf("No");
	return 0;
}