package string.definition;

import java.util.Arrays;


public class BucketSort {
    
    
    private  class Person{
        private String name;
        private int key;
        public Person(String name, int key) {
            super();
            this.name = name;
            this.key = key;
        }
        @Override
        public String toString() {
            return "Person [name=" + name + ", key=" + key + "]";
        }
        
    }
    public static void sort(Person[] a){
       int[] count = new int[5];
       int[] accum = new int[6];
       int n = a.length;
       Person[] aux = new Person[n];
       for (int i = 0; i < n; i++){
           count[a[i].key]++;
       }
       accum[0] = 0;
       for (int i = 0; i < 5; i++){
           accum[i + 1]  = count[i] + accum[i];

       }
       for (int i = 0; i < n; i++){
           aux[accum[a[i].key]++] = a[i];
       }
       for (int i = 0; i < n; i++){
           a[i] = aux[i];
       }
    }
    
    public static void main(String[] args) {
      
        Person p1 = new BucketSort().new Person("wilson1", 1);

        Person p2 = new BucketSort().new Person("wilson2", 2);
        Person p3 = new BucketSort().new Person("wilson3", 2);
        Person p4 = new BucketSort().new Person("wilson4", 3);
        Person p5 = new BucketSort().new Person("wilson5", 4);
        Person p6 = new BucketSort().new Person("wilson6", 1);
        Person p7 = new BucketSort().new Person("wilson7", 0);
        Person p8 = new BucketSort().new Person("wilson8", 0);
        Person p9 = new BucketSort().new Person("wilson9", 4);
        Person p10 = new BucketSort().new Person("wilson10", 4);
        Person p11 = new BucketSort().new Person("wilson11", 1);
        Person p12 = new BucketSort().new Person("wilson11", 3);
        Person[] a = new Person[]{p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12};
        System.out.println(Arrays.toString(a));
        sort(a);
        System.out.println(Arrays.toString(a));
        
    }
    
}
