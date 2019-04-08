/*
 * 2.cpp
 *
 *  Created on: 2013-11-8
 *      Author: ???1300012996
 */
int main(){
    int a,b,c,d,e;
    for(a=1;a<=5;a++){
    	 for(b=1;b<=5;b++){if(b==a)continue;//????
    		 for(c=1;c<=5;c++){if(c==a||c==b)continue;
    			 for(d=1;d<=5;d++){if(d==a||d==b||d==c)continue;
    				 for(e=1;e<=5;e++){if(e==2||e==3)continue;if(e==a||e==b||e==c||e==d)continue;//e??2?3
    					 if((a==1||a==2)!=(e==1))continue;//???1?2 ?????????????
    					 if((b==1||b==2)!=(b==2))continue;
    					 if((c==1||c==2)!=(a==5))continue;
    					 if((d==1||d==2)!=(c!=1))continue;
    					 if((e==1||e==2)!=(d==1))continue;
    					 if((e==1)+(b==2)+(a==5)+(c!=1)+(d==1)==2)
    						 {cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;break;}
    				 }
    			 }
    		 }
    	 }
    }
	return 0;
}

