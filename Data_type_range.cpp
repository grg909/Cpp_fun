/*
* Date    : 2019/10/31
* Author  : WANG JINGE
* Email   : wang.j.au@m.titech.ac.jp
* Standard: C++14
*/


int main() {
    printf("%d\n", INT_MAX);
    printf("%d", INT_MIN);
    return 0;
}

output:
2147483647
-2147483648

// C++ code to check for Integer overflow
int check_overflow(int num1, int num2) {
    if (num1 > INT_MAX - num2)
        return -1;
    else
        return num1 + num2;
};

int main() {
    int num1 = 2147483627;
    int num2 = 20;

    int result = check_overflow(num1, num2);
    if (result == -1)
        cout << "Integer overflow occurred";
    else
        cout << result;
}


// In c when a data type reaches its max value,
// the next number it goes to is -(max+1).
printf("%d\n",2147483647); //max value of an int;
printf("%d\n",2147483648); //max value of an int+1;
printf("%d\n",2147483649); //max value of an int+2;