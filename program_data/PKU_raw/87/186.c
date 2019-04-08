int main(int argc, char* argv[])
{
   int a,b,c,d,e,f,i,g,h;
   for(i=0;i<10000;i++){
   scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
   if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
   h=(60-c)+(59-b)*60+(11-a)*3600+f+e*60+d*3600;
   printf("%d\n",h);
   }
   }

 
	
	
	return 0;
}