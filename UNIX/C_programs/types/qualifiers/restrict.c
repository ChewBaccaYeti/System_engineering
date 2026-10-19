#include <stdio.h>
#include <string.h>

//? restrict - is a way to tell machine about memory allocation,
// that the  pointer is the only way to access the object it points to during its lifetime
// and the pointer is similar as symbolic link. It doesn't contains value, it's leading to var with its value.
void copy_array(int *dest, int *src, int n)
{
    for (int i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    copy_array(arr, arr, 5); // Undefined behavior: src and dest overlap!
    return 0;
}
