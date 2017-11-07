#include <iostream>
#include <cmath>

int main()
{
    size_t answer;

    std::cout << "Enter a number: ";
    std::cin >> answer;
    std::cout << "The prime factors are: ";

    // The number 2 is the smallest prime number and easy to factor, so lets.
    while ( answer % 2 == 0 )
    {
        answer /= 2;

        std::cout << "2 ";
    }

    // To find prime factors of a given number, we need to go through all the
    // numbers between 2 and the square root of the given number, which
    // significantly reduces the checks we need to make.
    // See https://books.google.co.uk/books?id=hk72BwAAQBAJ&pg=PA153
    //
    // We can skip 2 here, as we know from above that the given number isn't
    // divisible by 2.
    for ( size_t i = 3; i <= sqrt(answer); ++i )
    {
        if ( answer % i == 0 )
        {
            answer /= i;

            std::cout << i << " ";
        }
    }

    std::cout << "and " << answer << std::endl;

    return 0;
}

