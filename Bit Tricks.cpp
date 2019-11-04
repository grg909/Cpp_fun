/*
* Date    : 2019/11/4
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/


// Bitwise operator
&, |, <<, >>, ~, ^

int main() {
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;

    // The result is 1(00000001)
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a & b);

    // The result is 13(00001101)
    printf("a|b = %d\n", a | b);

    // The result is 12(00001100)
    printf("a^b = %d\n", a ^ b);

    // The result is 250(11111010)
    printf("~a = %d\n", a = ~a);

    // The result is 18(00010010)
    printf("b<<1 = %d\n", b << 1);

    // The result is 4(00000100)
    printf("b>>1 = %d\n", b >> 1);

    return 0;
}

// << and >> should not be used for negative numbers
// Also, if the number is shifted more than the size of integer, the behaviour is undefined.

// The bitwise XOR operator is the most useful operator from technical interview perspective
int findOdd(vector<int> &nums) {
    int res = 0;
    for (int i = 0; i < nums.size(); i++)
        res ^= nums[i];
    return res;
}

int main() {
    vector<int> nums = {12, 12, 14, 90, 14, 14, 14};
    cout << findOdd(nums);
    return 0;
}

// The & operator can be used to quickly check if a number is odd or even
int main() {
    int x = 19;
    (x & 1) ? cout << "Odd" : cout << "Even";
}


// How to set a bit in the number ‘num’
void set(int &num, int pos) {
    num |= (1 << pos);
}

int main() {
    int num = 4, pos = 1;
    set(num, pos);
    cout << (int) (num) << endl;
    return 0;
}

// How to unset/clear a bit at n’th position in the number ‘num’
void unset(int &num, int pos) {
    num &= (~(1 << pos));
}

int main() {
    int num = 7, pos = 1;
    set(num, pos);
    cout << (int) (num) << endl;
    return 0;
}