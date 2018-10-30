#include <stdio.h>


long rFibo(int i);
long sFibo(int i);
int main() {
    int s,r;
   for(int i=3;i<=45;i++){
       s=sFibo(i);
       r=rFibo(i);
       if(i%2)
           printf("sfibo(%d) = %ld\nrfibo(%d) = %ld\n",i,s,i,r);
   }
    return 0;
}
long rFibo(int i){
    if(i<=2)
        return 1;
    else
        return rFibo(i-1) + rFibo(i-2);
}
long sFibo(int i){
    static long sub2=1;
    static long sub1=1;
    static int count = 3;
    int temp = 1;
        if (i == count)
            return sub1 + sub2;
        temp = sub1;
        sub1 = sub1+sub2;
        sub2 = temp;

       count++;
       return sFibo(i);

}