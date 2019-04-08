/*
 * y3.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main(){
	int starty,startm,startd,
	    endy,endm,endd,run=0,t1=0,t2=0,total=0,i,
	month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>starty>>startm>>startd;
	cin>>endy>>endm>>endd;
	for(i=starty+1;i<endy;i++)
		if((i%4 == 0 && i% 100 != 0) || (i % 400 == 0))
			run++;
	if(((starty%4 == 0&&starty% 100 != 0)||(starty % 400 == 0))&&startm<=2)
	   run++;
	if(((endy%4 == 0&&endy% 100 != 0)||(endy % 400 == 0))&&endm>=3)
	   run++;
	total=365*(endy-starty);
	for(i=0;i<startm-1;i++)
		t1+=month[i];
	for(i=0;i<endm-1;i++)
		t2+=month[i];
	t1+=startd;
	t2+=endd;
	total=total+t2-t1+run;
	cout<<total;
	return 0;
}
