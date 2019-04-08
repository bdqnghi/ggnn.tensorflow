int main(){
    int z,q,s,l;
    int a1;
    for(z=1;z<=5;z++){
     for(q=1;q<=5;q++){
     if(q==z)
     continue;
     for(s=1;s<=5;s++){
         if((s==q)||(s==z))
             continue;          
     for(l=1;l<=5;l++){
          if((l==q)||(l==z)||(l==s))
             continue;              
       a1=((z+q)==(s+l))+((z+l)>(s+q))+((z+s)<(q));
       if(a1==3){
       cout<<"l "<<l*10<<endl<<"q "<<q*10<<endl<<"z "<<z*10<<endl<<"s "<<s*10<<endl;
                }
                }
                }
                }
                }
                return 0;
                }      
       
