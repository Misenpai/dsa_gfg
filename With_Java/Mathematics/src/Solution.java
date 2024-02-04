public class Solution {
    static int digitsInFactorial(int N) {

        int temp = 1;
        for (int i = 2; i <= N; i++) {
            temp = temp * i;
            
        }
        System.out.println("Value of temp: " + temp);
        int res = 0;
        while (temp > 0) {
            temp = temp / 10;
            res++;
        }
        return res;
    }
}
