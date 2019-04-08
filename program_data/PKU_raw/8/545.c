

int ary1[30], ary2[30];
int *pt1,*pt2;



void input(int array[],int num)
{
     int i;
     for(i=0; i<num; i++){
              cin >>array[i];
     }
}
void sort(int *ptr, int num)
{
     int i,j;       int temp;
     for(i=num-1; i>=0; i--){
             for(j=0; j<i; j++){
                      if(*(ptr+j)>*(ptr+j+1))
                      {     swap(*(ptr+j),*(ptr+j+1));  } 
             }
     }
}
void combine(int *ptr1, int *ptr2, int num1, int num2)
{
     int i;      
     ptr1+= num1;
     for(i=0; i< num2; i++){
              *(ptr1+i) = *(ptr2+i);
     }
}
void demo(int *pointer, int sum)
{
     int count=0;
     while(count != sum){
                 cout<< *pointer;
                 if(count++ !=sum-1)
                 {          cout << " ";     }
                 pointer++;
     }  
}


int main(int argc, char *argv[])
{
    pt1= &ary1[0];     pt2= &ary2[0];
    int m,n;
    cin >> m >> n;
    input(ary1,m);
    input(ary2,n);
    sort(ary1,m);
    sort(ary2,n);
    combine(pt1, pt2, m,n);
    demo(pt1, m+n);
    
   
    return EXIT_SUCCESS;
}
