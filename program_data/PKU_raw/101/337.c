int main(){
    int a,b,c,aa,bb,cc,i;
    char food[4];
    for(a=1;a<4;a++)
    	for(b=1;b<4;b++)
    		for(c=1;c<4;c++){
    			aa=((b>a)+(c==a));
    			    bb=((a>b)+(a>c));
    			    cc=((c>b)+(b>a));
                 if((((a==b)&&(aa==bb))+((a<b)&&(aa>bb))+((a>b)&&(aa<bb)))==1)
                	 if((((a==c)&&(aa==cc))+((a<c)&&(aa>cc))+((a>c)&&(aa<cc)))==1)
                		 if((((b==c)&&(bb==cc))+((b>c)&&(bb<cc))+((b<c)&&(bb>cc)))==1){
                			 food[a]='A';
                			 food[b]='B';
                			 food[c]='C';
                			for(i=1;i<4;i++)
                				cout<<food[i];
                			cout<<endl;
                		 }
                  }
return 0;
}
