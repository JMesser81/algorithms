void swap(int*, int*);

//template <typename T>
void sort(int test_data[], int array_length)
{
    for (int i = 0; i < array_length; i++)
    {
        for (int j = i+1; j < array_length; j++)
        {
            if (test_data[j] < test_data[i])
            {
                swap(&(test_data[i]), &(test_data[j]));
            }
        }
    }

}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}