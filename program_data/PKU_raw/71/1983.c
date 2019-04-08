int main()
{
 int m[12],a,b,c,d,i,sum,r,s;
 m[0]=0;
 m[1]=31;
 m[2]=28;
 m[3]=31;
 m[4]=30;
 m[5]=31;
 m[6]=30;
 m[7]=31;
 m[8]=31;
 m[9]=30;
 m[10]=31;
 m[11]=30;
 scanf("%d",&r);
 for(s=0;s<r;s++){
 scanf("%d %d %d",&a,&b,&c);
 sum=0;
 if(b>c){
	 d=b;
	 b=c;
	 c=d;
 }
 for(i=b;i<c;i++){
	 sum=sum+m[i];
 }
 if(b<3){
	  if(((a%4==0)&&(a%100!=0))||(a%400==0)){
		  sum=sum+1;
	  }
 }
 if((sum%7)==0)
	 printf("YES\n");
 else printf("NO\n");
 }
 return 0;
}
