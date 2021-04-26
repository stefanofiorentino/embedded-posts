#include <iostream>

void wrong_realloc(void **input_output)
{
    if (input_output)
    {
        *input_output = realloc(input_output, 2048);
    }
}

int main(int, char **)
{
    std::cout << "Hello, world!\n";
    auto *ptr = calloc(1024, 1);
    wrong_realloc(&ptr);
    free(ptr);
}
