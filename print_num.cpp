#include <iostream> // Required for input/output operations (cout, cin)
#include <algorithm> // Required for the std::sort function
#include <vector>    // Required for using std::vector

int main() {
    // Declare a vector to store the numbers
    std::vector<int> numbers;
    int num;
    int count;

    std::cout << "Enter the number of elements: ";
    std::cin >> count;

    std::cout << "Enter " << count << " numbers:" << std::endl;
    for (int i = 0; i < count; ++i) {
        std::cin >> num;
        numbers.push_back(num); // Add the number to the vector
    }

    // Sort the numbers in ascending order
    // std::sort sorts the elements in the range [begin, end)
    std::sort(numbers.begin(), numbers.end());

    // Print the sorted numbers
    std::cout << "Numbers in ascending order: ";
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0; // Indicate successful program execution
}