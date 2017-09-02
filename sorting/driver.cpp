#include <iostream>
#include <vector>

const int NUM_ELEMENTS = 100000;

void sort(int[], int);
void print_array(int[], int);

int main(int argc, char **argv)
{
    int number;
    std::vector<int> v(NUM_ELEMENTS);
    while (std::cin >> number)
    {
        v.push_back(number);
    }

    int test_data[v.size()];
    std::copy(v.begin(), v.end(), test_data);
    //print_array(test_data, v.size()); //NUM_ELEMENTS);
    
    sort(test_data, v.size());
    
    //print_array(test_data, v.size());

    return 0;

}

void print_array(int test_data[], const int array_length)
{
    std::cout << "Array data" << std::endl;

    for (int i = 0; i < array_length; i++)
    {
        std::cout << test_data[i] << " ";
    }

    std::cout << std::endl;
}