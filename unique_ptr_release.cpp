#include <iostream>
#include <memory>

struct Widget
{
    uint64_t index;
};

void correct_realloc(void **output)
{
    std::cout << sizeof(Widget) << " in " << 2 * sizeof(Widget) << "\n";
    if (*output)
    {
        *output = realloc(*output, 2 * sizeof(Widget));
    }
}

int main(int, char **)
{
    std::cout << "Hello, world!\n";
    void *ptr = std::unique_ptr<Widget>().release();
    correct_realloc(&ptr);
    free(ptr);
}
