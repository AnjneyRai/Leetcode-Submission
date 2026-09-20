class Solution {
public:
    int countDigits(int num) {
        int originalNum = num;
        int count = 0;
        
        while (num > 0) {
            int digit = num % 10; // Extract the last digit
            
            // Check if the digit divides the original number perfectly
            if (originalNum % digit == 0) {
                count++;
            }
            
            num /= 10; // Remove the last digit
        }
        
        return count;
    }
};
