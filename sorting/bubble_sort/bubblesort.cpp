void swap(int*, int*);

void sort(int data[], int array_length)
{
    for (int i = 0, j; i < array_length; i++)
    {
        for (int j = array_length -1; j > 0; j--)
        {
            if (data[j] < data[j-1])
            {
                swap(&(data[j]), &(data[j-1]));
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