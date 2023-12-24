#include <stdio.h>

float arithmeticalMiddleValueNotEmpty(float *data, signed int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *data;
        data++;
    }
    return sum / size;
}

float arithmeticalMiddleValue(float *data, signed int size)
{
    return (0 == size) ? 0 : arithmeticalMiddleValueNotEmpty(data, size);
}

int main()
{
    float data[] = {11.0, 2.5, 2.5};
    signed int size = sizeof(data) / sizeof(data[0]);
    printf("%f", arithmeticalMiddleValue(data, size));
}