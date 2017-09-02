// insertion sort
//template <class T>
void sort(int data[], int array_length)
{
    // 3, 2, 4, 1
    //  
    for (int i = 1, j; i < array_length; i++)
    {
        int tmp = data[i]; // tmp = 2
        for (j = i; j > 0 && tmp < data[j-1]; j--)
        {
            data[j] = data[j -1];
        }
        data[j] = tmp;
    }   
}
