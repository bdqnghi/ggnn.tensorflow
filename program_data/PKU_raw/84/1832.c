int main (){
	int first,second,tmp;
	int n;
	int i=0;
	scanf("%d",&n);
	
    first=-10000;
	second=-100000;
		do{
			i++;
		scanf("%d",&tmp);
	     if (tmp>first)
		 {second=first;
		 first=tmp;
		 }
		   else if (tmp>second)
		 { second=tmp;
		 }
		}while (i!=n);
		
	



printf("%d\n%d",first,second);
return 0;
}