int main()
{
 	int a,b,c,d,e,f,i,h,s,r;
 	for(i=1;1;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&f==0&&e==0){
			break;
			}
		else{
			h=(d+12-a)*3600;
			s=(60*b+c)-(60*e+f);
			r=h-s;
			printf("%d\n",r);
			}
		}
 	
    return 0;
}