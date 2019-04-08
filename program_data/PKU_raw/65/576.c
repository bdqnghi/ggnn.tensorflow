int main(){
	int a,b,x,y,z=0;

	
scanf("%d",&x);
	for(y=0;y<x;y++){
scanf("%d %d",&a,&b);
if(a==0&&b==1)z=z+1;
if(a==1&&b==2)z=z+1;
if(a==2&&b==0)z=z+1;
if(b==0&&a==1)z=z-1;
if(b==1&&a==2)z=z-1;
if(b==2&&a==0)z=z-1;}

if(z>0)printf("A");	
if(z<0)printf("B");	
if(z==0)printf("Tie");	
return 0;

}