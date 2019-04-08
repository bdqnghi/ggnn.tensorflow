int main()
{
    int n,ri;
    double a, b, c, d;
    scanf("%d", &n);
    for(ri = 1; ri <= n; ri++){
        scanf("%lf %lf %lf", &a, &b, &c);
    d=b*b-4*a*c;
	if(a==0){if(b==0){if(c==0){printf("???????????!\n");}
	else{printf("a?b?0?c??0??????\n");}}
	else{printf("x=%.5f\n", -c/b);}
	}
	else{if(d>0){printf("x1=%.5f;", (-b+sqrt(d))/(2*a));
	printf("x2=%.5f\n", (-b-sqrt(d))/(2*a));}
	else{if(d==0){printf("x1=x2=%.5f\n", (-b+sqrt(d))/(2*a));}
    else{if(d<0){if(b==0){printf("x1=%.5f+%.5fi;",b/(2*a), sqrt(-d)/(2*a));printf("x2=%.5f-%.5fi\n", b/(2*a), sqrt(-d)/(2*a));}
    else{if(d<0){if(b!=0){printf("x1=%.5f+%.5fi;",-b/(2*a), sqrt(-d)/(2*a));printf("x2=%.5f-%.5fi\n", -b/(2*a), sqrt(-d)/(2*a));}  
    } 
    }    
    }
    }
    }       
    }
    }
}