class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";       // To store the final sum as a string
        int i = num1.size() - 1;  // Pointer for num1 starting from last digit
        int j = num2.size() - 1;  // Pointer for num2 starting from last digit
        int carry = 0;            // To keep track of carry during addition

        // Loop until both strings are fully traversed and no carry remains
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;       // Start with carry from previous addition

            if (i >= 0) sum += num1[i--] - '0'; // Add digit from num1 if exists
            if (j >= 0) sum += num2[j--] - '0'; // Add digit from num2 if exists

            carry = sum / 10;      // Compute new carry (e.g., 15 → carry = 1)
            result += (sum % 10) + '0'; // Append current digit to result (as char)
            // Note: result is being built in **reverse order**
        }

        // Reverse the result string to get the correct order
        reverse(result.begin(), result.end());

        return result; // Return the final sum as a string
    }
};
