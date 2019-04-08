int main(){
int c=0,m=0,i,a,b,j,z=1;
double n,q=0,w;
char x[505],y[505];
scanf("%lf",&n);
scanf("%s",x);
scanf("%s",y);
a=strlen(x);
b=strlen(y);
if(a!=b){z=0;}
else{for(i=0;i<a;i++){if((x[i]=='A'||
						  x[i]=='T'||
						  x[i]=='C'||
						  x[i]=='G')&&
						  (y[i]=='A'||
						  y[i]=='T'||
						  y[i]=='C'||
						  y[i]=='G'))z=1;else z=0;}     
     }
if(z==0)printf("error");
if(z!=0){for(i=0;i<a;i++){if(x[i]==y[i])q++;}
        }
if(z!=0){w=q/a;if(w>=n)printf("yes");else printf("no");}
return 0;
}