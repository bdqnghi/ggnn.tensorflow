int main()
{int a,b,c,d,e,f,t;
scanf("%d",&a); 
 if(0<a,a<10) printf("%d\n",a);
	 else if(10<a,a<100){b=a/10;c=a%10;t=10*c+b;
	 printf("%d\n",t);}
	 else if(100<a,a<1000){b=a/100;c=a%100/10;d=a%10;t=100*d+10*c+b;
	 printf("%d\n",t);}
	 else if(1000<a,a<10000){b=a/1000;c=a%1000/100;d=a%100/10;e=a%10;t=1000*e+100*d+10*c+b;
	 printf("%d\n",t);}
	 else if(10000<a,a<100000){b=a/10000;c=a%10000/1000;d=a%1000/100;e=a%100/10;f=a%10;t=10000*f+1000*e+100*d+10*c+b;
	 printf("%d\n",t);}

}
