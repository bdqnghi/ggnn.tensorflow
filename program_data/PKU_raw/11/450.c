
int main()
{ 
	int a,b,c,x;
	scanf("%d%d%d",&a,&b,&c);
	if(a%4==0&&a%100!=0||a%400==0)
	   {if(b==1)
	   x=c;
	   
	   else if(b==2)
	   x=31+c;
	   
	   else if(b==3)
	   x=60+c;
	   
	  else if(b==4)
	   x=91+c;
       
	   else if(b==5)
	   x=121+c;
       
	   else if(b==6)
	   x=152+c;
       
	   else if(b==7)
	   x=182+c;

       else if(b==8)
	   x=213+c;

	   else if(b==9)
	   x=244+c;

	   else if(b==10)
	   x=274+c;
    
	   else if(b==11)
	   x=305+c;
     
	    else if(b==12)
	   x=335+c;
	
}
	
	else
	{if(b==1)
	  x=c;
	    
	else if(b==2)
	x=31+c;
	
	else if(b==3)
	x=59+c;
	
	else if(b==4)
	x=90+c;
    
	else if(b==5)
	x=120+c;
      
	else if(b==6)
	x=151+c;
      
	else if(b==7)
	x=181+c;
    
	else if(b==8)
	x=212+c;
     
	else if(b==9)
	x=243+c;
     
	else if(b==10)
	x=273+c;
     else if(b==11)
	x=304+c;
     
	else if(b==12)
	x=334+c;
	
}
	printf("%d\n",x);
	return 0;
}

