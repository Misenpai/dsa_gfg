
class Factorial {
    // iterative
    static int fact(int n) {
        int res = 1;
        for (int i = 2; i <= n; i++) {
            res = res * i;
        }
        return res;
    }

    // recursive
    static int fact_rec(int n) {
        if (n == 0) {
            return 1;
        }
        return n * fact_rec(n - 1);
    }

    public static void main(String[] args) {
        int test_iter = 5;
        System.out.println(fact(test_iter));
        System.out.println(fact_rec(test_iter));
    }

}
