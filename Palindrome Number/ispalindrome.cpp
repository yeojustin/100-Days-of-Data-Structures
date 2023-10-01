class Solution {
public:
    bool isPalindrome(int x) {

        // check for neg number first
        // if neg then its definitely not a palindrome num
        if (x < 0)
        {
            return false;
        }
        else
        {
            // for a true palindrome, the tested num when resevred msyt be equal
            // eg. 121 when reversed, will still be 121

            // declare and init a var for reserved num
            long reversedNum = 0;
            
            // declare and init a temp for input args
            long tempNum = x;

            long addToReversedNum = 0;

            while (tempNum != 0) 
            {
                addToReversedNum = tempNum % 10; // modulo 10 to find the tenth, if any
                
                // multiply by 10 to shift the tenth to the right (we are essentialy doing the reversal here)
                reversedNum = reversedNum * 10 + addToReversedNum; 

                // finally, we need to divide input num by 10 'chop off' the last digit
                // eg. 12345/10 = 1234....
                tempNum /= 10;
            }

            // check if x == reversedNum
            return (x == reversedNum);
        }
    }
};