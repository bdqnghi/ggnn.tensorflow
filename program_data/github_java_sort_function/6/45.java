package mypack;

import java.util.Scanner;

public class radixsort{
    int[] a;
    public radixsort(){}
    public radixsort( int[] arr ){
        a = arr;
        sort();
    }
    void init( Scanner inp ){
        int n = inp.nextInt();
        int i = 0;
        a = new int[n];
        while(i<n){
            a[i] = inp.nextInt();
            ++i;
        }
    }
    int maxarr(){
        int max = a[0];
        int i = 1;
        while( i<a.length ){
            if( max<a[i] ){
                max = a[i];
            }
            ++i;
        }
        return max;
    }
    void sort(){
        
        
        arrlist<queue<Integer>> bucket = new arrlist<queue<Integer>>( 10 );
        int i = 0;
        while( i<10 ){
            bucket.pos(i).element = new queue<Integer>();
            ++i;
        }
        int max = maxarr();
       
        int radix = 1;
        int j;
        while( max!=0 ){
            radix *= 10;
            i = 0;
            while( i<a.length ){
                bucket.pos( (a[i]/(radix/10))%10 ).element.push( a[i] );
                ++i;
            }
            i = 0;
            j = 0;
            while( i<10 ){
                while( !bucket.pos(i).element.isEmpty() ){
                    a[j] = bucket.pos(i).element.popback();
                    j++;
                }
                ++i;
            }
            max/=10;
        }
    }
    public void display(){
        int i = 0;
        while( i<a.length ){
            System.out.print(a[i]+" ");
            ++i;
        }
        System.out.println();
    }

}