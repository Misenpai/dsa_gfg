public class GCD {
    static int gcd(int b) {
        for(int i=1;i<=b;i++){
            if (b == 0) {
                return ;
            } else {
                return gcd(b);
            }
        }
        
    }
}   
