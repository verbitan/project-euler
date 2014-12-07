#include <iostream>
#include <math.h>

static const double PHI = (1 + sqrt(5)) / 2;

int main()
{
    int answer = 0;
    int currentVal = 0;

    // Every third number in the Fibonacci sequence is even.
    for ( int i = 3; currentVal <= 4000000; i = i + 3 )
    {
        // Increment answer by the previous value.
        answer += currentVal;

        // You can calculate ANY Fibonacci number using the golden ratio (phi).
        // See http://www.mathsisfun.com/numbers/fibonacci-sequence.html
        currentVal = (pow(PHI, i) - pow(1 - PHI, i)) / sqrt(5);
    }

    std::cout << "The answer is: " << answer << std::endl;

    return 0;
}

