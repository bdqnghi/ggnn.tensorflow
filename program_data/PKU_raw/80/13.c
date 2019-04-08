int main()
{
int result = 0;
int y1,m1,d1,y2,m2,d2,i,ylp;
int day[2][12] = {31,28,31,30,31,30,31,31,30,31,30,31, 31,29,31,30,31,30,31,31,30,31,30,31};
int year[2] = {365,366};
cin>>y1>>m1>>d1;
cin>>y2>>m2>>d2;
 

ylp = y2-y1-1;

if(ylp >0){
	for(i=y1+1;i<y2;i++){
	     result += year[  (i % 4 == 0 && i % 100 != 0) || (i % 400 == 0) ];
	}
	
}

if(y1 != y2){
if(m1 < 12){
	for(i = m1;i<12;i++){
	     result += day[(y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0) ][ i];
	}
}




if(m2>1) {
	for(i = 0;i<m2-1;i++){
	     result += day[(y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0)][i ] ;
	}
 
}
result += day[(i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)][m1-1 ] - d1;
result += d2;
}
else{

	if(m1 != m2){
       for(i=m1;i<m2-1;i++){
	      result += day[(y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0)][i ] ;
	   }
       result += day[(i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)][m1-1 ] - d1;
    	result += d2;
	  
	}
	else{
	    result +=d2-d1;
	}
}

	
cout<<result<<endl;
return 0;
}