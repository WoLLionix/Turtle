#include <iostream>

int main()
{
    int N;
    double distance = 1.5, sum = 0;
    std::cout << "Enter the number of days: ";
    std::cin >> N;

    if (N == 0)
        std::cout << "\nThe distance is: " << 0;

    for (int i = 0; i < N; i++)
    {
        sum += distance;
        distance += 0.2;
    }

    std::cout << "\nThe distance is: " << sum << 'm';
}
