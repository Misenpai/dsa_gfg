public class Prime_no {
    // efficent method
    static boolean isPrime(int n) {
        if (n == 1) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }

        }
        return true;
    }

    // more efficient method
    static boolean isprime(int n) {
        if (n == 1) {
            return false;
        }
        else if (n == 2 || n == 3) {
            return true;
        }
        for (int i = 5; i * i <= n; i = i + 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}
