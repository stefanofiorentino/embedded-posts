#include <iostream>

void wrong_realloc(void *input_output)
{
    if (input_output)
    {
        input_output = realloc(input_output, 2048);
    }
}

void correct_realloc(void **input_output)
{
    if (*input_output)
    {
        *input_output = realloc(*input_output, 2048);
    }
}

int main(int, char **)
{
    std::cout << "Hello, world!\n";
    void *ptr = malloc(1024);
    wrong_realloc(ptr);
    correct_realloc(&ptr);
    free(ptr);
}
