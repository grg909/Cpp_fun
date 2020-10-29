/*
 * TODO: remove and replace this file header comment
 * This is a .cpp file you will edit and turn in.
 * Remove starter comments and add your own
 * comments on each function and on complex code sections.
 */
#include "console.h"
#include <iostream>
#include "testing/SimpleTest.h"
using namespace std;

/* This function takes one argument `n` and calculates the sum
 * of all proper divisors of `n` excluding itself. To find divisors
 * a loop iterates over all numbers from 1 to n-1, testing for a
 * zero remainder from the division.
 *
 * Note: long is a C++ type is a variant of int that allows for a
 * larger range of values. For all intents and purposes, you can
 * treat it like you would an int.
 */
long divisorSum(long n) {
    long total = 0;
    for (long divisor = 1; divisor < n; divisor++) {
        if (n % divisor == 0) {
            total += divisor;
        }
    }
    return total;
}

/* This function takes one argument `n` and returns a boolean
 * (true/false) value indicating whether or not `n` is perfect.
 * A perfect number is a non-zero positive number whose sum
 * of its proper divisors is equal to itself.
 */
bool isPerfect(long n) {
    return (n != 0) && (n == divisorSum(n));
}

/* This function does an exhaustive search for perfect numbers.
 * It takes one argument `stop` and searches the range 1 to `stop`,
 * checking each number to see whether it is perfect and if so,
 * printing it to the console.
 */
void findPerfects(long stop) {
    for (long num = 1; num < stop; num++) {
        if (isPerfect(num)) {
            cout << "Found perfect number: " << num << endl;
        }
        if (num % 10000 == 0) cout << "." << flush; // progress bar
    }
    cout << endl << "Done searching up to " << stop << endl;
}

/* TODO: Replace this comment with a descriptive function
 * header comment.
 */
long smarterSum(long n) {
    if (n <= 1)
        return 0;
    long total = 0;
    long sqrtNum = sqrt(n);
    for (long divisor = 1; divisor <= sqrtNum; divisor++) {
        if (n % divisor == 0) {
            total += divisor;
            total += n/divisor;
        }
    }
    total -= n;
    if (sqrtNum * sqrtNum == n){
        total -= sqrtNum;
    }
    return total;
}

/* TODO: Replace this comment with a descriptive function
 * header comment.
 */
bool isPerfectSmarter(long n) {
    return (n != 0) && (n == smarterSum(n));
}

/* TODO: Replace this comment with a descriptive function
 * header comment.
 */
void findPerfectsSmarter(long stop) {
    for (long num = 1; num < stop; num++) {
        if (isPerfectSmarter(num)) {
            cout << "Found perfect number: " << num << endl;
        }
        if (num % 10000 == 0) cout << "." << flush; // progress bar
    }
    cout << endl << "Done searching up to " << stop << endl;
}

bool isPrime(long n){
    for(int k = 2; k < n; k++){
        if (n % k == 0)
            return false;
    }
    return true;
}

/* TODO: Replace this comment with a descriptive function
 * header comment.
 */
long findNthPerfectEuclid(long n) {
    /* TODO: Fill in this function. */
    int count = 0;
    long perfectNum = -1;
    for(int k = 1; count != n; k++){
        long m = pow(2, k) -1;
        if(isPrime(m)){
            perfectNum = pow(2,k-1) * (pow(2, k) - 1);
            if (isPerfectSmarter(perfectNum)){
                count++;
                cout << endl << "Find " << count << "th perfect number: " << perfectNum << endl;
            }
        }
    }
    return perfectNum;
}


/* * * * * * Test Cases * * * * * */

/* Note: Do not add or remove any of the PROVIDED_TEST tests.
 * You should add your own STUDENT_TEST tests below the
 * provided tests.
 */

PROVIDED_TEST("Confirm divisorSum of small inputs") {
    EXPECT_EQUAL(divisorSum(1), 0);
    EXPECT_EQUAL(divisorSum(6), 6);
    EXPECT_EQUAL(divisorSum(12), 16);
}

PROVIDED_TEST("6 and 28 are perfect") {
    EXPECT(isPerfect(6));
    EXPECT(isPerfect(28));
}

PROVIDED_TEST("12 and 98765 are not perfect") {
    EXPECT(!isPerfect(12));
    EXPECT(!isPerfect(98765));
}

PROVIDED_TEST("Oddballs, zero, one, negative") {
    EXPECT(!isPerfect(0));
    EXPECT(!isPerfect(1));
    EXPECT(!isPerfect(-6));
}

PROVIDED_TEST("33550336 is perfect") {
    EXPECT(isPerfect(33550336));
}

PROVIDED_TEST("Time multiple trials of findPerfects on doubling input sizes") {
    cout << endl;
    TIME_OPERATION(20000, findPerfects(20000));
    // TIME_OPERATION(40000, findPerfects(40000));
    // TIME_OPERATION(80000, findPerfects(80000));
    // TIME_OPERATION(160000, findPerfects(160000));
    // TIME_OPERATION(320000, findPerfects(320000));
    // TIME_OPERATION(640000, findPerfects(640000));
}

// TODO: add your student test cases here
STUDENT_TEST("test isPerfect with several negative numbers"){
    cout << endl;
    EXPECT(!isPerfect(-2));
    EXPECT(!isPerfect(-32));
    EXPECT(!isPerfect(-324));
}

STUDENT_TEST("test broken divisorSum function"){
    EXPECT_EQUAL(divisorSum(12),16);
}

STUDENT_TEST("test bogus test"){
    EXPECT(isPerfect(5));
}

STUDENT_TEST("test smarterSum"){
    EXPECT_EQUAL(smarterSum(-32), divisorSum(-32));
    EXPECT_EQUAL(smarterSum(1), divisorSum(1));
    EXPECT_EQUAL(smarterSum(100), divisorSum(100));
    EXPECT_EQUAL(smarterSum(6), divisorSum(6));
}

STUDENT_TEST("test time of findPerfectsSmarter"){
    cout << endl;
    TIME_OPERATION(20000, findPerfectsSmarter(20000));
    TIME_OPERATION(40000, findPerfectsSmarter(40000));
    TIME_OPERATION(80000, findPerfectsSmarter(80000));
    TIME_OPERATION(160000, findPerfectsSmarter(160000));
    TIME_OPERATION(320000, findPerfectsSmarter(320000));
    TIME_OPERATION(640000, findPerfectsSmarter(640000));
}

PROVIDED_TEST("test isPrime") {
    EXPECT(isPrime(1));
    EXPECT(isPrime(2));
    EXPECT(!isPrime(4));
}

PROVIDED_TEST("test findNthPerfectEuclid") {
    EXPECT(isPerfect(findNthPerfectEuclid(5)));
}
