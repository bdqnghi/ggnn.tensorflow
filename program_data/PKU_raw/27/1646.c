int main()
{
    int n,i;
    double a,b,c;
    double x1[100],x2[100],s1[100],s2[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
         scanf("%lf%lf%lf",&a,&b,&c);
		 if( (b*b-4*a*c)==0 )
		 {
			 x1[i]=x2[i]=(-b)/(2*a);
			 s2[i]=0.0;
		 }
		 else if( (b*b-4*a*c)>0 )
		 {
			 x1[i]=(-b+sqrt(b*b-4*a*c))/(2*a);
             x2[i]=(-b-sqrt(b*b-4*a*c))/(2*a);
			 s2[i]=0.0;
		 }
         else if( (b*b-4*a*c)<0 )
		 {
			 s1[i]=(-b)/(2*a);
			 if(s1[i]==-0.0)
				 s1[i]=0.0;
			 s2[i]=sqrt(4*a*c-b*b)/(2*a);
		 }
	}
    for(i=1;i<=n;i++)
	{
        if(x1[i]==x2[i]&&s2[i]==0)
			printf("x1=x2=%.5f\n",x1[i]);
       	else if(x1[i]!=x2[i]&&s2[i]==0)
			printf("x1=%.5f;x2=%.5f\n",x1[i],x2[i]);
        else 
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",s1[i],s2[i],s1[i],s2[i]);
                          
	}

return 0;
}

