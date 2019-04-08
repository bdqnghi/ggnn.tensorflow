int main()
{int i, j, k= 0,l, a[1228], m;      
 cin>> m;
 for(i= 3; i<= 9997; i= i+ 2)    
	 {l=0;
      for(j= 3; j<= sqrt(i); j++)
	  {if(i%j== 0)       
	  l++;}
		if(l==0)
		a[k++]= i;    
	 }
 for(i= 0; a[i]<= m/2; i++)     
     {for(j= i; a[j]<= m- a[i]; j++)    
        if(a[i]+ a[j]== m)
        	cout<< a[i]<< " "<< a[j]<< endl;
     }
 return 0;
}